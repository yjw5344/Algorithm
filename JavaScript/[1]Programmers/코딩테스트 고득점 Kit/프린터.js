function solution(priorities, location) {
    const indexList = [];
    let maxValue = Math.max(...priorities);
    let answer = 1;

    priorities.forEach( (value, index) => {
        indexList.push(index);
    });

    while (priorities.length > 0) {
        let numShift = priorities.shift();
        let indexShift = indexList.shift();
        if (numShift < maxValue) {            
            priorities.push(numShift);            
            indexList.push(indexShift);
        } else {
            if (location == indexShift) {
                break;
            } else {
                answer += 1;
                maxValue = Math.max(...priorities);
            }
        } 
    }
    return answer;
}

const priorities1 = [2, 1, 3, 2];
const priorities2 = [1, 1, 9, 1, 1, 1];
const location1 = 2;
const location2 = 0;

console.log(solution(priorities1, location1));
