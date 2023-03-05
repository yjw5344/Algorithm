// Callback 함수란?
// 다른 함수의 입력값으로 들어가는 함수로, 다른 함수에 의해서 나중에 호출되는 함수

const words = ['spray', 'limit', 'elite', 'exuberant', 'destruction', 'present'];

function callback(element) {
    // console.log(element);
    // if(element.length > 6){
    //     return true;
    // } else {
    //     return false;
    // }

    return element.length > 6;
}

let newWords = words.filter(callback);
console.log(newWords);

// 위의 내용에서 익명 함수를 사용하는 방법
let newWords2 = words.filter(function(element) {
    return element.length > 6;
})

console.log(newWords2);

// Arrow Function을 사용하는 방법
let newWords3 = words.filter((element) => {
    return element.length > 6;
})

console.log(newWords3);

// Arrow Function을 좀 더 간결하게 정리하는 방법
// Arrow Function에서 매개변수 인자가 1개인 경우는 () 생략이 가능합나다.
// Arrow Function에서 내부 함수의 코드가 1줄인 경우 {}, return을 생략이 가능하다.
let newWords4 = words.filter(element => element.length > 6)

console.log(newWords4);

function myfilter(origin, callback) {
    let result = [];
    for(let i = 0 ; i < origin.length ; i++) {
        let current = origin[i];
        if(callback(current)) {
            result.push(current);
        }
    }
    return result;
}


let newWords5 = myfilter(words, element => element.length >6 );
console.log(newWords5);