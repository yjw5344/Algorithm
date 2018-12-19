#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, vector<int> tshirts) {

    int answer = 0;
    sort(people.begin(), people.end());
    sort(tshirts.begin(), tshirts.end());

    for (int i = 0 ; i < people.size() ; i++){
         int personSize = people.at(i);

         for(int j = 0; j < tshirts.size() ; j++){
             if( personSize <= tshirts.at(j) ){
                 answer++;
                 tshirts.erase(tshirts.begin()+j);
             }
         }
    }
    return answer;
}