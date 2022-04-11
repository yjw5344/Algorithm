// Readline 모듈(한줄)

// const readline = require('readline');
//
// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout
// });
//
// rl.on('line', function(line) {
//   console.log(line);
//
//   rl.close();
// }).on("close", function() {
//   process.exit();
// });

// Readline(여러 줄)
// const readline = require('readline');
//
// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout
// });
//
// let input = [];
//
// rl.on('line', function (line) {
//   input.push(line)
// }).on('close', function () {
//   console.log(input);
//   process.exit();
// });

// fs 라이브러리 사용 방법(한줄)
// >>>>>> readFileSync() 안의 '/dev/stdin' -> 백준 제출용, 로컬 환경은 해당 Js 파일을 넣어준다.
// let fs = require('fs');
// let input = fs.readFileSync('input.txt').toString().split(' ');



// fs 라이브러리 사용 방법(여러줄)
// >>>> 백준 '/dev/stdin'
let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().split('\n');

let count = input[0];
let numbers = [];

for (let i = 1; i < input.length; i++) {
  if (input[i] !== '') {
    numbers.push(input[i].split(' '));
  }
}

console.log(count);
console.log(input[1].split(' '));
console.log(numbers);
