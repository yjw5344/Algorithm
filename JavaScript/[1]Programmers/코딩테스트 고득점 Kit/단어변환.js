function solution(begin, target, words) {
    let answer = 0;
    let visited = [];
    let queue = [];

    if(!words.includes(target)) return 0;
    queue.push([begin, answer]);

    while(queue) {
        let [current, count] = queue.shift();

        // 시작값과 최종값이 동일한 경우
        if(current === target) return count;

        // 시작값과 최종값이 동일하지 않은 경우
        words.forEach((value) => {
            let notEqual = 0;

            //해당 값을 방문한 경우
            if(visited.includes(value)) return;

            for(let i = 0 ; i < value.length ; i++){
                if(value[i] !== current[i]) {
                    notEqual++;
                }
            }

            // 방문처리가 필요한 값
            if(notEqual === 1){
                queue.push([value, count+1]);
                visited.push(value);
            }
        });
    }

    return answer;
}

let words = ["hot", "dot", "dog", "lot", "log", "cog"];
let begin = "hit";
let target = "cog";

console.log(solution(begin, target, words));

