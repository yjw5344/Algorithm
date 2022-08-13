function solution(nums) {

    let answer = 0;
    let setNum = new Set(nums);
    let setNums = [...setNum];

    let pickCnt = (nums.length / 2);

    if(setNums.length < pickCnt) {
        answer = setNums.length;
    } else {
        answer = pickCnt;
    }
    return answer;
}


let nums = [3,1,2,3];
console.log(solution(nums));

