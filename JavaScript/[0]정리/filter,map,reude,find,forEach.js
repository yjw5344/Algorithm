// todo : forEach
// forEach(callback(value, index), thisArg))
// 지정한 배열을 단순 순회하면서, 인자값은 value와 Index 값을 표출
console.log("=====forEach=====");
let a = [10,11,12,13,14,15];
a.forEach( function(v,i) {
    console.log("value : " + v + " ,index : " + i);
    console.log(this);
},[1,2]);
console.log("=============");

// todo : filter
// filter(callback(value,index),thisArg)
// 지정한 배열을 순회하면서, 콜백함수를 실행함 -> 콜백함수의 True/False 기준으로 리턴값을 받아서, 최종적으로 배열을 반환함
console.log("Filter");
let arr = [4, 15, 377, 395, 400, 1024, 3000];
// var arr2 = arr.filter((v,i) => (v % 5 === 0))
let arr2 = arr.filter((v,i) => {
    return (v%5 === 0);
});
console.log(arr2)	// [15, 395, 400, 3000]
console.log("=============");

// todo : find()
// find(callback(element, index, array)
// 단 하나의 요소만 반환, 여러 개 있으면 처음값만 반환
console.log("Find");
let arr4 = [4, 15, 377, 395, 400, 1024, 3000]
let arr3 = arr.find((n) => (n % 5 === 0))
console.log(arr3)	// 15
console.log("=============");

// todo : indexOf
// indexOf(search,fromIndex)
// 원하는 요소의 식별자 찾기
console.log("IndexOf");
let arr5 = [4,2,3,5,7,1,2];
const findIndex = arr5.indexOf(2);
console.log(findIndex);
const findIndex1 = arr5.indexOf(2,2);
console.log(findIndex1);
console.log("=============");

// todo :  map()
// map(callback(value, index, array), thisArg)
// 배열의 요소(인덱스)를 일괄적으로 변경
console.log("===map===");
let arr10 = ['foo', 'hello', 'diamond', 'A'];
// 각 요소의 글자 길이값 반환
let arr11 = arr10.map((v) => v.length)
console.log(arr11); // [3, 5, 7, 1]
console.log("=============");

// todo : reduce
// reduce(callback(acc, value), initialValue)
// acc : 누적값, value : 배열값, initailValue는 (누적되는 데이터의 초기화값)

// reduce 내부 함수 구현
// function reduce(predicate, val){
//     let result = val;
//     for(let i = 0 ; i < arr.length; i++){
//         result = predicate(result, arr[i]);
//     }
//     return result;
// }
console.log("reduce");
let arr20 = [10,11,12,13,14,15];
let sum = arr20.reduce((acc,v) => acc+v, 0);
let sum1 = arr20.reduce((acc,v) => acc+(v-10), 0);
console.log(sum);
console.log(sum1);
console.log("=============");


