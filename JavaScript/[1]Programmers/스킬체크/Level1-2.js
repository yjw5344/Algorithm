function solution(numbers) {
    let arr = [];
    let answer = 0;

    for(let i = 0 ; i < 10 ; i++) {
        if( !numbers.includes(i)){
            arr.push(i);
        }
    }

    arr.forEach( (value) => {
        answer += value;
    });

    return answer;
}

let numbers1 = [1,2,3,4,6,7,8,0];
let numbers2 = [5,8,4,0,6,7,9];

console.log(solution(numbers2));