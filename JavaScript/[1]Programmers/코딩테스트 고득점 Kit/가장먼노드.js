function solution(n, edge) {

    let visited = new Array(n+1).fill(0); // 방문하지 않은 노드 : 0, 방문한 노드 : 1
    let depth = new Array(n+1).fill(0);

    let queue = [];
    queue.push(1); // 1번 노드부터 시작
    visited[1] = 1;

    while(queue.length){
        let currentNode = queue.shift();
        let level = depth[currentNode] + 1;

        edge.forEach( (element) => {
            if( element[0] === currentNode && visited[element[1]] !== 1){
                visited[element[1]] = 1;
                queue.push(element[1]);
                depth[element[1]] = level;
                return;
            }
            if( element[1] === currentNode && visited[element[0]] !== 1){
                visited[element[0]] = 1;
                queue.push(element[0]);
                depth[element[0]] = level;
            }
        });
    }

    let maxDepth = Math.max(...depth);
    let answer = depth.reduce(function(acc, value) {
        if(value === maxDepth) {
            acc += 1;
        }
        return acc;
    },0);

    return answer;
}

let vertex = [ [3,6],[4,3],[3,2],[1,3],[1,2],[2,4],[5,2]];
let n = 6;

console.log(solution(n, vertex));
