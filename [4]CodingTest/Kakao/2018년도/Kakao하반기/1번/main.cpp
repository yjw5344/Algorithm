#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {

    vector< vector<string>> result;
    pair< map< string, string >::iterator, bool > userBool;
    map<string, string> user;
    vector<string> answer;

    for(int i = 0 ; i < record.size();i++){

        vector<string> row;
        int startIndex = 0;
        int cnt = 0;

        for(int j = 0 ; j < record.at(i).size() ; j++){
            cnt++;
            if(record.at(i)[j] == ' '){
                row.push_back(record.at(i).substr(startIndex,cnt-1));
                startIndex = j+1;
                cnt = 0;
            }else if(j == record.at(i).size()-1){
                row.push_back(record.at(i).substr(startIndex,j));
                startIndex = j+1;
            }
        }
        result.push_back(row);

        if(row.at(0) == "Enter"){

            userBool = user.insert(make_pair(row.at(1),row.at(2)));
            if(userBool.second == false){
                user.find(row.at(1))->second = row.at(2);
            }
        } else if( row.at(0) == "Change"){
            user.find(row.at(1))->second = row.at(2);
        }
    }

    for(int i = 0 ; i < result.size() ; i++){
        string str;
        if( result.at(i)[0] == "Enter"){
            str += user.find(result.at(i)[1])->second;
            str += "님이 들어왔습니다.";
            answer.push_back(str);
        } else if(result.at(i)[0] == "Leave"){
            str += user.find(result.at(i)[1])->second;
            str += "님이 나갔습니다.";
            answer.push_back(str);
        }
    }
    return answer;
}

int main() {

    vector<string> str;
    str.push_back("Enter uid1234 Muzi");
    str.push_back("Enter uid4567 Prodo");
    str.push_back("Enter uid1234 Prodo");
    str.push_back("Change uid4567 Ryan");


    vector<string> ans;
    ans = solution(str);

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans.at(i) << endl;
    }

    return 0;
}