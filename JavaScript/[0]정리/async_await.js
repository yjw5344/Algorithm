function timer(time) {
    return new Promise(function(resolve) {
        setTimeout(function(){
            resolve(time);
        },time);
    });
}

// timer(1000).then(function(time){
//     console.log("time : " + time);
//     return timer(time+1000);
// }).then(function(time){
//     console.log("time : " + time);
// });

async function run() {
    console.log("start");
    let time = await timer(1000);
    console.log("time : " + time);
    time = await timer(time+1000);
    console.log("time : " + time);
    time = await timer(time+1000);
    console.log("time : " + time);
    console.log("end");
}

console.log("parent start");
run();
console.log("parent end");