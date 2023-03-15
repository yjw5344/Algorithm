function solution(bridge_length, weight, truck_weights) {

    let time = 0;
    let onBridge = [];
    let truckSum = 0;

    while (truck_weights.length > 0 || onBridge.length > 0) {
        time++;        
        
        if (onBridge.length > 0) {
            if (time-onBridge[0].time == bridge_length) {
                truckSum -= onBridge[0].weight;
                onBridge.shift();
            }
        }

        if (truck_weights.length > 0) {
            if (truckSum+truck_weights[0] <= weight) {
                truckSum += truck_weights[0];
                onBridge.push({ weight : truck_weights.shift(), time : time});
            }
        }
    }        
    return time;
}

let bridge_length1 = 2;
let weight1 = 10;
let truck_weights1 = [7,4,5,6];

let bridge_length2 = 100;
let weight2 = 100;
let truck_weights2 = [10];

let bridge_length3 = 100;
let weight3 = 100;
let truck_weights3 = [10,10,10,10,10,10,10,10,10,10];

console.log(solution(bridge_length1, weight1, truck_weights1));