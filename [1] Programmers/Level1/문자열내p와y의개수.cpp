#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pFlag = 0;
    int yFlag = 0;

    for(int i = 0 ; i < s.length() ; i++){
        if(s.at(i) == 'P' || s.at(i) == 'p'){
            pFlag++;
        }
        if(s.at(i) == 'y' || s.at(i) == 'Y'){
            yFlag++;
        }
    }
    if( yFlag == pFlag){
        answer = true;
    }else{
        answer = false;
    }
    return answer;
}
