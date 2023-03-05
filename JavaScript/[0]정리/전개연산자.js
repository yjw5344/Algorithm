// 전개 연산자
const list = ["apple", "orange", "banana", "strawberry"];
function print() {
    // filter, includes, from을 사용해서 문자열 'e'가 포함된 노드로 구성된 배여을 만들어서 반환하기
    let fruitList = Array.from(arguments);
    // arguments는 함수의 매개변수
    // from() 메서드는 배열 or 객체를 얇은 복사를 통해 새로운 Array를 만드는 것
    console.log(fruitList);
    let result1 = [];
    for(let i of fruitList){
        if(i.includes("e")){
            result1.push(i);
        }
    }

    let result2 = fruitList.filter( function(data){
        return data.includes("e");
    });

    console.log(result1);
    console.log(result2);
}

print(...list);
// list를 전개하여 인자로 전달하기 때문에 fruitList가 배열 형태로 만들 수 있다.
// print( "apple","orange", "banana", "strawberry") 내부에 배열을 그냥 넘기는 것이 아니라, 배열을 전개하여 개별 인덱스로 넘겨준다.
// > 따라서 print 내부 함수의 from 메서드를 통해 배열을 만드는 것이 가능하다.
// print(list)로 넘겨줄 경우 -> print 함수에 배열 객체를 넘겨주게된다.
// > 따라서 print 내부 함수의 from 메서드를 통하면 from을 통해 생성되는 배열에 매개변수(arguments)로 전달 받은 배열 객체를 통채로 배열로 만들어주게된다.
// > Array[ Array[]]

// From 함수에 대한 이해 111

console.log(Array.from('foo'));
// expected output: Array ["f", "o", "o"]
console.log(Array.from([1, 2, 3], x => x + x));
// expected output: Array [2, 4, 6]

const list = ['a', 'b', 'cc']
function print1() {
    let tt = Array.from(arguments);
    console.log(tt);
    console.log(arguments);
}
print1(list)

// From 함수에 대한 이해 222

let a = {
    "msg" : "A"
};
function test(){
    let b = Array.from(arguments);
    console.log(b);
}
test(a);
