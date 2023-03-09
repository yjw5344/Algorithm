function solution(arr) {

    const answer = [];

    arr.forEach( (value, index, array) => {
        if (index == 0) {
            answer.push(value);
        } else if (array[index-1] !== value){
            answer.push(value);
        }
    });
    
    return answer;
}

const arr1 = [1,1,3,3,0,1,1];
const arr2 = [4,4,4,3,3];

console.log(solution(arr1));

