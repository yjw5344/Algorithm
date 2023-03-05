// 배열 정렬
let arr = [5,1,6,3,6,7,11,12];
console.log("===정렬 전===");
console.log(arr);

let arrResult = arr.sort(); // 단순 sort 메서드를 사용할 경우 -> 숫자인 경우에도 아스키코드 기준으로 정렬을 실행하기 때문에 제대로 정렬이 안 된다.
let arrResult1 = arr.sort((a,b) => a-b);
console.log("===정렬 후===");
console.log("arrResult : " + arrResult);
console.log("arrResult1 : " + arrResult1);

//Sort ->
// sort(function(a,b) {
//  배열이 [1,2,3,4]인 경우,
//  a : 1, b : 2 => X
//  a : 2, b : 1 => 순서에 주의해서 사용해야됩니다.
// });

// 객체(object) 정렬
let items = [
    { name: 'Edward', value: 21 },
    { name: 'Sharpe', value: 37 },
    { name: 'And', value: 45 },
    { name: 'The', value: -12 },
    { name: 'Magnetic', value: 13 },
    { name: 'Zeros', value: 37 }
];

// 문자열
// 문자열은 sort로 정렬해도됨
// -,+ 연산자를 이용해서, 정렬이 불가능함

// value 기준으로 정렬
items.sort(function (a, b) {
    if (a.value > b.value) {
        return 1; // 리턴이 0보다 크면 a와 b를 변경함 -> a를 큰 색인으로 정렬한다. b,a
        //  return a-b // 오름차순 정렬 1,2,3 -> 1-2 음수
        // return -1;
    }
    if (a.value < b.value) {
        return -1; // 리턴이 0보다 작으면 a와 b를 변경하지 않는다 -> a를 낮은 색인으로 정렬한다. b,a
        // return b-a // 내림차순 정렬 3,2,1 -> 2-3 음수
        // return 1;
    }
    // a must be equal to b
    return 0;
});

console.log(items);

// name 기준으로 정렬
items.sort(function(a, b) {
    var nameA = a.name.toUpperCase(); // ignore upper and lowercase
    var nameB = b.name.toUpperCase(); // ignore upper and lowercase
    if (nameA < nameB) {
        return -1;
    }
    if (nameA > nameB) {
        return 1;
    }

    // 이름이 같을 경우
    return 0;
});