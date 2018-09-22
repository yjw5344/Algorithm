#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Item{
public:
    int attack;
    int health;
    int num;
};
bool cmp(const Item &a, const Item &b){
    return a.health > b.health;
}

vector<int> solution(vector<int> healths, vector<vector<int>> items) {
    vector<int> answer;
    vector<Item> bag;

    for(int i = 0 ; i<items.size();i++){
        Item item;
        for(int j = 0 ; j< items.at(i).size() ; j++){
            if(j == 0){
                item.attack = items.at(i)[j];
            }else if(j == 1){
                item.health = items.at(i)[j];
            }
        }
        item.num = i+1;
        bag.push_back(item);
    }

    sort(bag.begin(), bag.end(), cmp);
    sort(healths.begin(), healths.end());

    for(int i = 0 ; i < healths.size() ; i++){
        for(int j = 0 ; j < bag.size(); j++){
            if( (healths.at(i) - bag.at(j).health) >= 100){
                answer.push_back(bag.at(j).num);
                bag.erase(bag.begin()+j);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

