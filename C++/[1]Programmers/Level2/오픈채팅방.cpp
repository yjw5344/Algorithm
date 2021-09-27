#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

class Person {
public:
  string id;
  string name;

  Person(string id, string name){
    this->id = id;
    this->name = name;
  }
};

// vector<string> solution(vector<string> record) {
//
//   int recordSize = record.size();
//   vector<string> parser;
//   string command = "";
//   string uid = "";
//   string name = "";
//
//   for(int i = 0 ; i < recordSize ; i++){
//     stringstream record(record[0]);
//     string parsing = "";
//
//     while( record >> parsing ){
//       parser.push_back(record);
//     }
//
//
//
//
//
//
//
//
//   }
//
//
//
//
//     vector<string> answer;
//
//
//
//
//     return answer;
// }

int main(){
  vector<string> record;
  record.push_back("Enter uid1234 Muzi");
  record.push_back("Enter uid4567 Prodo");
  record.push_back("Leave uid1234");
  record.push_back("Enter uid1234 Prodo");
  record.push_back("Chanage uid4567 Ryan");

  map<string, string> test;
  test["a"] = "A";
  cout << test.size() << endl;
  cout << test["a"] << endl;




  // vector<string> result = solution(record);

  // for(int i = 0 ; i < result.size() ; i++){
  //   cout << result.at(i) << endl;
  // }

  return 0;
}
