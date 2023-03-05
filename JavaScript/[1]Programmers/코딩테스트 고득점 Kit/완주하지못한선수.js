const solution = (participant, completion) => {

    let map = new Map();
    let answer = "";

    for(let people of participant) {
        if(map.get(people)){
            map.set(people,map.get(people)+1);
        } else {
            map.set(people,1);
        }
    }

    for(let person of completion) {
        if(map.get(person)) {
            map.set(person, map.get(person)-1);
        }
    }

    for(let people of participant){
        if(map.get(people) === 1) {
            answer = people;
        }
    }

    return answer;
}

// const participant =® ["l®eo", "kiki", "eden"];
// const completion = ["eden", "kiki"];

const participant = ["mislav", "stanko", "mislav", "ana"];
const completion = ["stanko", "ana", "mislav"];

console.log(solution(participant, completion));

