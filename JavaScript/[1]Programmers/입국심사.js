function solution(n, times) {
    times.sort();
    times.reverse();

    let minTime = 1;
    let maxTime = n * times[times.length-1];

    while (minTime < maxTime) {
        let avg = Math.floor((minTime + maxTime) / 2);

        let count = times.reduce((acc, time) => {
            return acc + Math.floor(avg / time);
        }, 0);

        if (count >= n) {
            maxTime = avg;
        } else {
            minTime = avg + 1;
        }
    }

    var answer = minTime;
    return answer;
}


let n = 6;
let times = [7, 10];

console.log(solution(n, times));