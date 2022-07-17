function solution(tickets) {

    let answer = [];

    tickets.sort( (a,b) => {
        if(a[0] < b[0]) return -1;
        else if(a[0] > b[0]) return 1;
        else if(a[0] === b[0]) {
            if(a[1] < b[1]) return -1;
            else if(a[1] > b[1]) return 1;
        }
    });

    console.log(tickets);



    let dfs = (ticketList, current, locationList) => {
        if(ticketList.length === 0) {
            answer = [...locationList];

        } else {
            let flag = false;
            for( let i = 0 ; i <  ticketList.length ; i++ ) {
                if(current === ticketList[i][0]) {
                    locationList.push(ticketList[i][1]);
                    current = ticketList[i][1];
                    ticketList.splice(i, 1);
                    flag = true;
                    break;
                }
            }

            if(flag === false) {
                let start = locationList[locationList.length-2];
                let addLocation = [start, current];
                current = start;
                locationList.splice(locationList.length-1,1);
                ticketList.push(addLocation);
            }

            dfs(ticketList,current,locationList);
        }
    };

    dfs(tickets, "ICN",["ICN"]);

    return answer;
}

const tickets = [["ICN", "SFO"], ["ICN", "ATL"], ["SFO", "ATL"], ["ATL", "ICN"], ["ATL","SFO"]];
// const tickets = [["cc","bb"], ["bb", "cc"], ["ICN", "bb"], ["bb", "ICN"]];
// const tickets = [["ICN", "AOO"], ["AOO", "BOO"], ["BOO", "COO"], ["COO", "DOO"], ["DOO", "EOO"], ["EOO", "DOO"], ["DOO", "COO"], ["COO", "BOO"], ["BOO", "AOO"]]
// console.log(solution(tickets));
console.log(solution1(tickets));

// [["aa", "bb"], ["bb","aa"], ["bb","cc"],["cc","bb"]];

// let t = [1,2,3,4,5];
// let aa = t.splice(t.length-1,1);
// console.log(t);
// console.log(aa);


function solution1(tickets) {
    let routes = [];

    function searchPath(extra, current, route) {
        if (extra.length === 0) {
            routes.push(route);
        }  else {
            extra.forEach( (value, index) => {
                if (current === value[0]) {
                    const newExtra = extra.slice();
                    newExtra.splice(index, 1);

                    searchPath(newExtra, value[1], route.concat(value[1]));
                }
            });
        }
    };

    searchPath(tickets, 'ICN', ['ICN']);
    routes.sort();

    return routes[0];
}
