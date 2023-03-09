function solution(progresses, speeds) {
    const answer = [];
    let count = 0;
    let day = 0;
    while (progresses.length > 0) {
        if (progresses[0] + day * speeds[0] >= 100) {
            progresses.shift();
            speeds.shift();
            count++;
        } else {
            if (count > 0) {
                answer.push(count);
                count = 0;
            }
            day++;
        }
    }
    answer.push(count);
    return answer;
}

const progresses1 = [93, 30, 55];
const progresses2 = [95, 90, 99, 99, 80, 99];
const speed1 = [1,30,5];
const speed2 = [1,1,1,1,1,1];

console.log(solution(progresses1, speed1));

