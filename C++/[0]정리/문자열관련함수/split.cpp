#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string word;

    while(getline(ss, word, delimiter)) {
      result.push_back(word);
    }

    return result;
}

int main(){
    string str = " Hello beautiful world in the universe ! ! ";
    string str1 = "asdasdasd ";
    vector <string> result = split(str, ' ');
    vector <string> result1 = split(str1, ' ');
    cout << result.size() << endl;
    cout << result1.size() << endl;
    for(auto &r : result) cout << ">> " << r << " <<" << endl;
    for(auto &r : result1) cout << ">> " << r << " <<" << endl;
}
