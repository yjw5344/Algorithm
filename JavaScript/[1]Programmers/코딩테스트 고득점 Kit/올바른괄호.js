function solution(s){

    let stack = [];

    for(let i = 0 ; i < s.length ; i++) {
        if (s[i] === "(") {
            stack.push("(");
        } else {
            if (stack.length === 0) {
                return false;
            } else {
                stack.pop();
            }
        }
    }
    return stack.length === 0;
}

const s1 = "()()";
const s2 = "(())()"
const s3 = ")()(";
const s4 = "(()(";

console.log(solution(s1));