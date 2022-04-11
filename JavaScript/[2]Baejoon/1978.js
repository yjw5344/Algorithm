let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().split('\n');

let N = input[0];
let numbers = input[1].split(' ');
let answer = 0;

let primeNum = numbers.filter((number) => {
  number = Number(number);
  if(number === 1) {
    return false;
  } else {
    for(let i = 2 ; i < number ; i++) {
      if( number % i === 0) {
        return false;
      }
    }
  }
  return true;
});

answer = primeNum.length;
console.log(answer);
