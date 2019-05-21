#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);

    map<string, int> wordCount;
    string beforeWord = words.at(0);
    string currentWord;

    wordCount.insert(pair<string, int> (beforeWord, 1));

    for(int i = 1 ; i < words.size() ; i++){
      currentWord = words.at(i);
      if( beforeWord.back() == currentWord.front()){
        if(wordCount.find(currentWord) == wordCount.end()){
          wordCount.insert(pair<string, int>(currentWord, 1));
          beforeWord = currentWord;
        }else{
          answer.at(0) = ((i % n) + 1);
          answer.at(1) = (i / n + 1);
          return answer;
        }
      }else{
        answer.at(0) = ((i % n) + 1);
        answer.at(1) = (i / n + 1);
        return answer;
      }
    }
    
    return answer;
}

int main(){
  int n1 = 3;
  int n2 = 5;
  int n3 = 2;

  vector<string> w1;
  vector<string> w2;
  vector<string> w3;

  w1.push_back("tank");
  w1.push_back("kick");
  w1.push_back("know");
  w1.push_back("wheel");
  w1.push_back("land");
  w1.push_back("dream");
  w1.push_back("mother");
  w1.push_back("robot");
  w1.push_back("tank");

  w2.push_back("hello");
  w2.push_back("observe");
  w2.push_back("effect");
  w2.push_back("take");
  w2.push_back("either");
  w2.push_back("recognize");
  w2.push_back("encourage");
  w2.push_back("ensure");
  w2.push_back("establish");
  w2.push_back("hang");
  w2.push_back("gather");
  w2.push_back("refer");
  w2.push_back("reference");
  w2.push_back("estimate");
  w2.push_back("executive");

  w3.push_back("hello");
  w3.push_back("one");
  w3.push_back("even");
  w3.push_back("never");
  w3.push_back("now");
  w3.push_back("world");
  w3.push_back("draw");

  cout << "word <1>" << endl;
  for(int i = 0 ; i < solution(n1,w1).size(); i++){
    cout << solution(n1,w1).at(i) << endl;
  }

  cout << "\nword <2>" << endl;
  for(int i = 0 ; i < solution(n2,w2).size(); i++){
    cout << solution(n2,w2).at(i) << endl;
  }

  cout << "\nword <3>" << endl;
  for(int i = 0 ; i < solution(n3,w3).size(); i++){
    cout << solution(n3,w3).at(i) << endl;
  }

  return 0;
}
