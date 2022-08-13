function solution(clothes) {

    let sortCloths = new Map();
    let answer = 1;

    clothes.forEach( (value) => {
        let cloth = sortCloths.get(value[1]);

        if(!cloth) {
            sortCloths.set(value[1], 1);
        } else {
            sortCloths.set(value[1], sortCloths.get(value[1])+1);
        }
    });

    sortCloths.forEach((value, key) => {
        answer *= (value + 1);
    });

    return answer-1;
}

let clothes = [["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]];
console.log(solution(clothes));





// 즉 옷의 종류가 3가지고 각각의 옷의 개수가 a, b, c라면 (x+a)(x+b)(x+c) = x3 + (a+b+c)x2 + (ab+bc+ca)x + (abc)라는 식이 정립됩니다. 보이시죠? 총 조합의 개수가 계수에 다 포함되어 있습니다.
//
//     해당 식의 계수의 합을 구하려면 x=1을 대입해주면 됩니다. 그 후 맨 앞 x3 의 계수는 정답에 포함되지 않으므로 마지막에 1을 빼주는 겁니다.
//     x=1을 대입한 식은 (1+a)(1+b)(1+c)가 되고 그 값에 1을 뺀 후 리턴해주면