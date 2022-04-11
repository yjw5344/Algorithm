let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().trim().split('\n');

let square = [];
let N;

for (let i = 0; i < input.length; i++) {
  square.push(input[i].split(' ').map(v =>  Number(v)));
}

square[0].splice(1,1);

console.log(square);



// for (let i = 0; i < input.length; i++) {
//   square.push(input[i].split(' ').map(v => {
//     if(i === 0){
//       N = input[0].split(' ')[0];
//     }
//     if(i === 0){
//
//
//
//     }
//
//
//     Number(v)}));
// }


console.log(input);
// let [M,N] = input[0].split(' ');
// let square = [];
