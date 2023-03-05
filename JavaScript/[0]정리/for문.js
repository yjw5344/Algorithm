
var data = [1,2,undefined,NaN,null,""];
data.forEach(function(value){
    console.log(value);
});

Array.prototype.getIndex = function() {};
for(let idx in data) {
    console.log(idx, data[idx], data);
}
console.log("=============");
for(let value of data) {
    console.log(value);
}
console.log("=============");
let str = "Hello World!!"
for(let value of str) {
    console.log(value);
    // 문자열에서도 동일하게 사용이 가능하다.
}


// for in : object를 순회할 때 사용, 상위 object(Array)에서 수정해서 사용할 경우 for..in을 사용하면 전부 순회하는 경우가 발생한다.
// >> 이런 경우를 막기 위해 forEach나 for of 문을 사용한다.


// for of : 배열을 순회할 때, 주로 사용
// for in : 객체 안의 속성값을 순회할 때, 주로 사용