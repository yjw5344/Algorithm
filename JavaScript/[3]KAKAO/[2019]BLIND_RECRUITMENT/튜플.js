function solution(s) {

    let result = new Set();

    s = s.slice(2,s.length-2);
    s = s.split('},{');
    s = s.map( (value) => {
        return value.split(",");
    });

    s.sort((a,b) => {
        return a.length-b.length;
    });

    s.forEach( (value) => {
        value.forEach((number)=> {
            result.add(Number(number));
        });
    })

    let answer = [...result];

    return answer;
}

// let s = "{{2},{2,1},{2,1,3},{2,1,3,4}}"	;
let s = "{{1,2,3},{2,1},{1,2,4,3},{2}}";

console.log(solution(s));