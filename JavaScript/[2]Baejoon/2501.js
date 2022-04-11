
let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().trim().split(' ').map(v=>Number(v));

let N = input[0];
let K = input[1];

let numList = [];

for(let i = 1 ; i < N+1 ; i++){
  let check = N%i;
  if(check === 0){
    numList.push(i);
  } else {
    continue;
  }
}

if(numList.length < K) {
  console.log(0);
} else {
  console.log(numList[K-1]);
}
