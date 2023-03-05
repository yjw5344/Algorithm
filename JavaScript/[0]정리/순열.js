const getCombinations = function (arr, selectNumber) {
    const results = [];
    if (selectNumber === 1) {
        return arr.map((value) => [value]); // 1개씩 택할 때, 바로 모든 배열의 원소 return
    }

    arr.forEach( (fixed, index, origin) => {
        const rest = origin.slice(index + 1); // 해당하는 fixed를 제외한 나머지 뒤
        const combinations = getCombinations(rest, selectNumber - 1); // 나머지에 대해서 조합을 구한다.
        const attached = combinations.map( (combination) => [fixed, ...combination]); //  돌아온 조합에 떼 놓은(fixed) 값 붙이기
        results.push(...attached); // 배열 spread syntax 로 모두 다 push
    });

    return results; // 결과가 담긴 results를 return
};

const arr = [1, 2, 3, 4];
const result = getCombinations(arr, 3);
// console.log(result);
// => [ [ 1, 2, 3 ], [ 1, 2, 4 ], [ 1, 3, 4 ], [ 2, 3, 4 ] ]


let test= [1,2,3];
let test1 = test.map( (value => [value]));
let test2 = test1.map( (value) => [100,...value]);
console.log(test1);
console.log(test2);