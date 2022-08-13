function solution(s) {
    let word = s.split(' ');
    let answer = '';

    word.forEach( (value) => {
        let modify = '';
        for(let i = 0 ; i < value.length ; i++) {
            let flag = i % 2;
            if( flag === 0) {
                modify += value[i].toUpperCase();
            } else {
                modify += value[i].toLowerCase();
            }
        }
        answer += modify;
        answer += " ";
    });
    answer = answer.slice(0,-1);

    return answer;
}

let s = "try hello world";

console.log(solution(s));