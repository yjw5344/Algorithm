function solution(id_list, report, k) {

    let callCnt = new Map();
    let blackList = [];
    let answer = [];

    let remoteDuplicate = new Set(report);
    report = [...remoteDuplicate];

    id_list.forEach((value) => {
        callCnt.set(value, [[],0]);
    });

    report.forEach( (value) => {
        let strSplit = value.split(' ');
        let reportList = callCnt.get(strSplit[0])[0];function solution(id_list, report, k) {

            let callCnt = new Map();
            let blackList = [];
            let answer = [];

            let remoteDuplicate = new Set(report);
            report = [...remoteDuplicate];

            id_list.forEach((value) => {
                callCnt.set(value, [[],0]);
            });

            report.forEach( (value) => {
                let strSplit = value.split(' ');
                let reportList = callCnt.get(strSplit[0])[0];
                reportList.push(strSplit[1]);
                callCnt.set( strSplit[0], [ reportList, callCnt.get(strSplit[0])[1]]);

                if(callCnt.has(strSplit[1])) {
                    callCnt.set( strSplit[1], [ [...callCnt.get(strSplit[1])[0]], callCnt.get(strSplit[1])[1] += 1 ]);
                }
            });

            callCnt.forEach((value,current) => {
                if(value[1] >= k) {
                    blackList.push(current);
                }
            });

            callCnt.forEach((value) => {
                let cnt = 0;
                value[0].forEach((reportID) => {
                    blackList.forEach((id) => {
                        if(reportID === id) {
                            cnt++;
                        }
                    });
                });
                answer.push(cnt);
            });
            return answer;
        }
        reportList.push(strSplit[1]);
        callCnt.set( strSplit[0], [ reportList, callCnt.get(strSplit[0])[1]]);

        if(callCnt.has(strSplit[1])) {
            callCnt.set( strSplit[1], [ [...callCnt.get(strSplit[1])[0]], callCnt.get(strSplit[1])[1] += 1 ]);
        }
    });

    callCnt.forEach((value,current) => {
        if(value[1] >= k) {
            blackList.push(current);
        }
    });

    callCnt.forEach((value) => {
        let cnt = 0;
        value[0].forEach((reportID) => {
            blackList.forEach((id) => {
                if(reportID === id) {
                    cnt++;
                }
            });
        });
        answer.push(cnt);
    });
    return answer;
}

// let id_list = ["muzi", "frodo", "apeach", "neo"];
let id_list = ["con", "ryan"];
// let report = ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"];
let report = ["ryan con", "ryan con", "ryan con", "ryan con"]
// let k = 2;
let k = 3;

console.log(solution(id_list, report, k));
