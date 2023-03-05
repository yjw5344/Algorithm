function solution(genres, plays) {

    const genresCount = new Map();
    const total = [];
    const answer = [];

    genres.forEach( (value, index) => {
        if (genresCount.get(value) == undefined) {
            genresCount.set(value, plays[index]);
        } else {
            genresCount.set(value, genresCount.get(value) + plays[index]);
        }

        total.push({
            genres : value,
            index : index,
            playCnt : plays[index]
        });
    });

    const mapToArr = [...genresCount]
    mapToArr.sort((a,b) => b[1] - a[1]);
    total.sort((a,b) => {
        if (a['genres'] > b['genres']) {
            return 1;
        } else if (a['genres'] < b['genres']) {
            return -1;
        } else {
            if (a['playCnt'] < b['playCnt']){
                return 1;
            } else if (a['playCnt'] > b['playCnt']) {
                return -1;
            } else {
                if (a['index'] > b['index']) {
                    return 1;
                } else {
                    return -1;
                }

            }
        }
    });

    mapToArr.forEach( (value)=> {
        let cnt = 0;
        total.forEach( (song) => {
            if(cnt == 2) {
                return;
            }
            if (song['genres'] == value[0]) {
                answer.push(song['index']);
                cnt++;
            }
        });
    });
    
    return answer;
}

let genres = ["classic", "pop", "classic", "classic", "pop"];
let plays = [500, 600, 150, 800, 2500];
console.log(solution(genres,plays));

