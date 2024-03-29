let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().trim().split('\n');
let [M,N] = input[0].split(' ');
let square = [];

for (let i = 1; i < input.length; i++) {
  square.push(input[i].split(' ').map(v => Number(v)));
}

const tetromino = {
  // ****
  1 : [[0,0],[0,1],[0,2],[0,3]],
  // *
  // *
  // *
  // *
  2 : [[0,0],[1,0],[2,0],[3,0]],
  // **
  // **
  3 : [[0,0],[0,1],[1,0],[1,1]],
  // *
  // ***
  4 : [[0,0],[1,0],[1,1],[1,2]],
  //  *
  //  *
  // **
  5 : [[0,1],[1,1],[2,1],[2,0]],
  // ***
  //   *
  6 : [[0,0],[0,1],[0,2],[1,2]],
  // **
  // *
  // *
  7 : [[0,0],[0,1],[1,0],[2,0]],
  //   *
  // ***
  8 : [[0,2],[1,0],[1,1],[1,2]],
  // *
  // *
  // **
  9 : [[0,0],[1,0],[2,0],[2,1]],
  // ***
  // *
  10 : [[0,0],[0,1],[0,2],[1,0]],
  // **
  //  *
  //  *
  11 : [[0,0],[0,1],[1,1],[2,1]],
  // *
  // **
  //  *
  12 : [[0,0],[1,0],[1,1],[2,1]],
  //  **
  // **
  13 : [[0,1],[0,2],[1,0],[1,1]],
  //  *
  // **
  // *
  14 : [[0,1],[1,0],[1,1],[2,0]],
  // **
  //  **
  15 : [[0,0],[0,1],[1,1],[1,2]],
  // ***
  //  *
  16 : [[0,0],[0,1],[0,2],[1,1]],
  //  *
  // **
  //  *
  17 : [[0,1],[1,0],[1,1],[2,1]],
  //  *
  // ***
  18 : [[0,1],[1,0],[1,1],[1,2]],
  // *
  // **
  // *
  19 : [[0,0],[1,0],[1,1],[2,0]]
};

let max = 0;
let check, sum;

for(let i = 0 ; i < M ; i++) {
  for(let j = 0 ; j < N ; j++) {
    for(t in tetromino) {
      sum = 0;
      flag = true;
      for(let k = 0 ; k < 4 ; k++) {
        // console.log(tetromino[Number(t)][k]);
        let [x,y] = tetromino[Number(t)][k];
        if( i+x >= M || j+y >= N) {
          flag = false;
          break;
        }
        if(flag) {
          sum += square[i+x][j+y];
        }
        if(max < sum) {
          max = sum;
        }
      }
    }
  }
}
// console.log(square);
console.log(max);
