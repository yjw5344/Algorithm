#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> tmp;
int cnt = 1;

vector<int> row;
vector<vector<int>> map;

void findPath(int end){
    int r = tmp.at(tmp.size()-1);
    tmp.pop_back();

    for(int i = 0; i < map.at(r).size() ; i++){
        if(map.at(r)[i] == 1){
            if(i == end){
                cnt++;
                break;
            }else{
                tmp.push_back(i);
                cnt++;
            };
        }
    }
    findPath(end);
}

vector<int> solution(int N, vector<vector<int>> directory, vector<vector<int>> query) {
    vector<int> answer;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            row.push_back(0);
        }
        map.push_back(row);
    }


    for(int i = 0 ; i<directory.size() ; i++){
        int x,y;
        for(int j = 0 ; j < directory.at(i).size() ; j++){
            if(j == 0)
                x = directory.at(i)[j]-1;
            else if(j == 1)
                y = directory.at(i)[j]-1;
        }
        map[x][y] = 1;
        map[y][x] = 1;
    }



    for(int i = 0 ; i<query.size() ; i++){
        if(i == 0){
            for(int j = 0 ; j < query.at(i).size() ; j++){
                if(j == 0){
                    tmp.push_back(query.at(i)[j]-1);
                } else if(j == 1){
                    findPath(query.at(i)[j]-1);
                    answer.push_back(cnt);
                }
            }
        }else{
            cnt = 1;
            tmp.clear();
            for(int j = 0 ; j < query.at(i).size() ; j++){
                if(j == 0){
                    tmp.push_back(query.at(i)[j]-1);
                } else if(j == 1){
                    findPath(query.at(i)[j]-1);
                    answer.push_back(cnt);
                }
            }
        }
    }
    return answer;
}

int main(){
    int N = 5;
    vector<vector<int>> directory;
    vector<vector<int>> query;
    vector<int> result;

    vector<int> a;
    a.push

    result = solution(N,directory,query);

    for(int i = 0 ; i< result.size(), i++){
        cout << result.at(i) << endl;
    }


    return 0;
}

