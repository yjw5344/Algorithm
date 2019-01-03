#include <string>
#include <vector>
#include <functional>


using namespace std;

vector<int> solution(int N, vector<int> stages) {

    vector< pair<double, int>> stageFail;

    for(int j = 1; j <= N ; j++){
        int s = 0;
        int f = 0;
        for(int i = 0 ; i < stages.size() ; i++){
            if(stages.at(i) > j){
                s++;
            }else{
                f++;
            }
        }
        stageFail.push_back( make_pair( ((double)f/(double)s), j ) );
    }
    sort(stageFail.begin(), stageFail.end(),greater<double>());

    vector<int> answer;
    for(int i = 0 ; i < stageFail.size() ; i++){
        answer.push_back(stageFail.at(i).second);
    }
    return answer;
}