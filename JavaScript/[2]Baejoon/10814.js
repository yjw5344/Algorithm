let fs = require('fs');
let input = fs.readFileSync('input.txt').toString().split('\n');

let N = input[0];
let users = [];

let User = function(age, name, index) {
  this.age = age;
  this.name = name;
  this.index = index;
};

for (let i = 1; i < input.length; i++) {
  if (input[i] !== '') {
    let splitUser = input[i].split(' ');
    users.push(new User(Number(splitUser[0]), splitUser[1], i));
  }
}

users.sort((a,b) => {
  if(a.age < b.age) return -1;
  if(a.age > b.age) return 1;
  if(a.age === b.age) {
    if(a.index < b.index) return -1;
    if(a.index > b.index) return 1;
  }
});

// console.log(users);
for(i of users) {
  console.log(i.age + " " + i.name);
}
