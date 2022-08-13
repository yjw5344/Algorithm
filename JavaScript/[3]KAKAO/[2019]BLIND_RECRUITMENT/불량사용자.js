function solution(user_id, banned_id) {

    let result = [];
    let sortList = [];
    let banned_len = banned_id.length;

    dfs(user_id, banned_len);

    function dfs(arr, selectNum) {
        if (selectNum === 1) {
            return arr.map( (value) => [value] ); // 1개씩 택할 때, 바로 모든 배열의 원소 return
        }
        arr.forEach( (fixed, index, origin) => {
            const rest = origin.slice(index + 1); // 해당하는 fixed를 제외한 나머지 뒤
            const combinations = dfs(rest, selectNum-1); // 나머지에 대해서 조합을 구한다.
            const attached = combinations.map( (combination) => [fixed, ...combination]); //  돌아온 조합에 떼 놓은(fixed) 값 붙이기
            sortList.push(...attached); // 배열 spread syntax 로 모두 다 push
        });
    }

    console.log(sortList);

}

let user_id = ["frodo", "fradi", "crodo", "abc123", "frodoc"];
// let banned_id = ["fr*d*", "abc1**"];
let banned_id = ["*rodo", "*rodo", "******"];

console.log(solution(user_id, banned_id));


// const getCombinations = function (arr, selectNumber) {
//     const results = [];
//     if (selectNumber === 1) {
//         return arr.map((value) => [value]); // 1개씩 택할 때, 바로 모든 배열의 원소 return
//     }
//
//     arr.forEach( (fixed, index, origin) => {
//         const rest = origin.slice(index + 1); // 해당하는 fixed를 제외한 나머지 뒤
//         const combinations = getCombinations(rest, selectNumber - 1); // 나머지에 대해서 조합을 구한다.
//         const attached = combinations.map( (combination) => [fixed, ...combination]); //  돌아온 조합에 떼 놓은(fixed) 값 붙이기
//         results.push(...attached); // 배열 spread syntax 로 모두 다 push
//     });
//
//     return results; // 결과가 담긴 results를 return
// };
//
// const arr = [1, 2, 3, 4];
// const result = getCombinations(arr, 3);
// console.log(result);