function solution(name) {

    let len = name.length;
    let answer = 0;
    let index = 0;

    let nameArr = [...name];
    nameArr.map((v,i)=> nameArr[i] = 'A');

    let result = nameArr.join('');

    while(name !== result) {
        if(name[index] !== 'A') {
            let upCount = name.charCodeAt(index) - 65;
            let downCount = 91 - name.charCodeAt(index);
            if(upCount >= downCount) {
                answer += downCount;
            }else {
                answer += upCount;
            }
        }
        let resultArr = [...result];
        resultArr[index] = name[index];
        result = resultArr.join("");

        let move = 0;
        for(let i = 1 ; i < len ; i++) {

            let right = index + i;
            let left = index - i;
            if(right >= len) right = right - len;
            if(left < 0 ) left = len + left;
            if(name[right] !== result[right]) {
                move = i;
                index = right;
                break;
            } else if(name[left] !== result[left]) {
                move = i;
                index = left;
                break;
            }
        }

        answer += move;
    }
    return answer;
}

// let name = "JEROEN";
// let name = "JAN";
// let name = "BABAAAAAAAAAB";
// let name = "ABABAAAAABA";
let name = "BBBBAAAABA";

console.log(solution(name));

// console.log('A'.charCodeAt());
// console.log('Z'.charCodeAt());