import fetch from 'node-fetch';
// Promise

// Synchronous : 동기
// Asynchronous : 비동기

console.log(1);
console.log(2);
setTimeout(function() {console.log(3)}, 5000);
console.log(4);

fetch('https://jsonplaceholder.typicode.com/posts')
    .then(function(response) {
        // response.json().then(function(data){ console.log("data", data)}); // Nested Promise 방식
        return response.json(); // response.json() -> Promise를 반환
    })
    .catch(function(reason) {
        console.log("reason", reason);
    })
    .then(function(data){ //Promise chaining
        console.log("data",data);
    })


// promise에서 Pending 상태 >>>> then에서 Resolved 처리

