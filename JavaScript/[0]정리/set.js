const set = new Set();
console.log(set); // Set(0) {}

const set1 = new Set([1, 2, 3, 3]);
console.log(set1); // Set(3) {1, 2, 3}

const set2 = new Set('hello');
console.log(set2); // Set(4) {"h", "e", "l", "o"}

console.log(set.size); // 3

set.add(1).add(2).add(2); // 이렇게도 사용가능한데 중복된 값은 무시된다.
console.log(set); // Set(2) {1, 2}