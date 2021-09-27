const genres = ["A", "B", "C"];
const plays = [1,2,3,4]

var arr = [...genres, ...plays]

console.log(arr);

const len = genres.length;
const flat = arr.flat();

console.log(len);
console.log(flat)

const newArr = new Array(len).fill([])
flat.forEach((n,i) => {
  console.log("n :" + n);
  console.log("i :" + i);
  console.log(newArr[i%len]);
  newArr[i%len] = [...newArr[i%len], n]
  console.log(newArr[i%len]);  
});
