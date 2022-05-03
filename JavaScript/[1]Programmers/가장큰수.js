function solution(numbers) {

    let answer = '';
    numbers.sort();
    numbers.reverse();

    numbers.sort((a,b) => {
        let num1 = a.toString() + b.toString();
        let num2 = b.toString() + a.toString();

        if( Number(num1) > Number(num2) ) {
            return -1;
        }
    });

    for(let number of numbers) {
        answer += number.toString();
    }

    if(Number(answer) === 0){
        answer = "0";
    }
    return answer;
}

// let numbers = [6, 10, 2];
let numbers = [3, 30, 34, 5, 9, 0];

console.log(solution(numbers));