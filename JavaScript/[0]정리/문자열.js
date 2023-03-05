// 문자열 관련 함수 정리

// substring(Start Index, End Index) : Start Index부터 End Index-1까지의 문자열을 추출
let str1 = "Hello World!";
console.log(str1.substring(2,5)) // llo
console.log(str1.substring(0,1)) // H 0
console.log(str1.substring(0,2)); // He 0,1

// substr(Start Index, length) : Start Index부터 length 만큼의 문자열을 추출
console.log(str1.substr(2,2));

// toUpperCase() : 문자열을 대문자로 만들기
let temp = str1[1].toUpperCase();
console.log(temp);


// slice( startIndex, endIndex)
// -> startIndex부터 endIndex-1까지 자른다.
let s = "Hello World!";
console.log(s.slice(1,7)); // "ello W"

// splice(startIndex, deleteCount, item)
// > startIndex부터 deleteCount 만큼 배열의 value를 삭제한다. >> 그리고 items 요소를 추가한다.
const animals = ["ant", "bison", "camel", "duck", "elephant", "birds"];
const animals1 = animals.splice(3, 2, 'cat', 'dog', 'cow');
console.log(animals);
// ["ant", "bison", "camel", "cat", "dog", "cow"]
console.log(animals1);
// ["duck", "elephant"]

// split
let str10 = "Hello World ! I M JUNGWON";
let splitString = str10.split(' ');
console.log(splitString);