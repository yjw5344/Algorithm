function solution(n, costs) {

    let answer = 0;
    let parent = [];

    for(let i = 0; i < n; i++) {
        parent.push(i);
    }

    costs.sort( (a,b) => {
        return a[2] - b[2];
    });

    const searchParent = (value) => {
        if( parent[value] == value) {
            return value;
        } else {
            return searchParent(parent[value]);
        }
    }

    const checkParent = (a,b) => {
        let parentA = searchParent(a);
        let parentB = searchParent(b);

        if(parentA < parentB) {
            parent[parentB] = parentA;
        } else {
            parent[parentA] = parentB;
        }
    }

    for(cost of costs) {
        if( !(searchParent(cost[0]) === searchParent(cost[1]))) {
            answer += cost[2];
            checkParent(cost[0],cost[1]);
        }
    }

    return answer;
}

let n = 4;
let costs = [[0,1,1],[0,2,2],[1,2,5],[1,3,1],[2,3,8]];

console.log(solution(n, costs));

// 1. cost 기준으로 오름차순 정렬
// 2. 빈 배열을 만든다(부모 노드를 찾기 위한 배열) -> 각 노드가 부모노드가 되도록 초기화를 진행한다.
// 3. cost의 2개의 정점의 부모 노드를 찾는다
//  3-1. cost의 개의 정점의 부모가 같으면 해당 그래프는 순회하는 경우이다.
// 4. 부모노드가 다른 경우, 해당 cost를 계산한다.
//  4-1. cost의 각 정점의 부모노드를 찾아서 초기화한 배열에 부모 노드를 기록한다.