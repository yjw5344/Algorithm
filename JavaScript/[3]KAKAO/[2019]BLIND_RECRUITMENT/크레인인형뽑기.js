function solution(board, moves) {

    let saveList = [];
    let answer = 0;

    for(let i = 0 ; i < moves.length ; i++) {
        for( let j = 0 ; j < board.length ; j++ ) {
            let target = board[j][moves[i]-1];
            if( target === 0) {
                continue;
            }

            if( target === saveList[saveList.length - 1]) {
                saveList.pop();
                answer += 2;
            } else {
                saveList.push(target);
            }
            board[j][moves[i]-1] = 0;
            break;
        }
    }

    return answer;
}

let board = [ [0,0,0,0,0], [0,0,1,0,3], [0,2,5,0,1], [4,2,4,4,2], [3,5,1,3,1] ];
let moves = [1,5,3,5,1,2,1,4];

console.log(solution(board, moves));

