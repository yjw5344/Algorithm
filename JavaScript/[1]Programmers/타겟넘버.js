function solution(numbers, target) {
    let answer = 0;

    calc(0,0);

    function calc(depth, sum) {
        if(depth === numbers.length) {
            if(sum === target) {
                answer += 1;
            }
            return ;
        }

        calc(depth+1, sum + numbers[depth]);
        calc(depth+1, sum - numbers[depth]);
    }
    return answer;
}



// let numbers = [1,1,1,1,1];
let numbers = [4,1,2,1];

// let target = 3;
let target = 4;

console.log(solution(numbers, target));