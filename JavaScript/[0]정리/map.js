let myMap = new Map()

let keyString = '문자열'
let keyObj = {}
let keyFunc = function() {}

// 값 설정
myMap.set(keyString, "'문자열'과 관련된 값")
myMap.set(keyObj, 'keyObj와 관련된 값')
myMap.set(keyFunc, 'keyFunc와 관련된 값')

console.log(myMap.size) // 3

// getting the values
console.log(myMap.get(keyString))  // "'문자열'과 관련된 값"
console.log(myMap.get(keyObj))     // "keyObj와 관련된 값"
console.log(myMap.get(keyFunc))    // "keyFunc와 관련된 값"

console.log(myMap.get('문자열')) // "'문자열'과 관련된 값"
// keyString === '문자열'이기 때문
console.log(myMap.get({}))            // undefined, keyObj !== {}
console.log(myMap.get(function() {})) // undefined, keyFunc !== function () {}

console.log(myMap.get("문자"));

// 1) Map.length: 값이 0인 속성.
// 2) Map.size: 맵의 키-값 쌍 갯수
// 3) Map.clear(): 맵 초기화
// 4) Map.entries(): 맵의 모든 키-값 쌍을 [key, value] 형태의 array로 만들어서 반환
// 5) Map.forEach(): 맵의 모든 키-값 쌍에 대해서 콜백함수 사용
// 6) Map.get(key): key값에 맞는 value값 반환
// 7) Map.delete(key): key-value 쌍 삭제
// 8) Map.has(key): 해당 key가 Map에 포함되어 있는지 확인
// 9) Map.keys(): 맵의 모든 key들을 반환
// 10) Map.set(key, value): 맵에 key-value 쌍을 집어넣음

