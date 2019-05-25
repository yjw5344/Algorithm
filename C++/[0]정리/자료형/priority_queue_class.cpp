// 우선 순위 큐 !!
// 우선 순위 큐를 사용하기 위해서는 Queue에 있는 PriorityQueue 라이브러리를 사용해도 된다.
// 하지만, 사용하는데 불편함 따라서 Class를 통해서 우선 순위 큐를 구현 !!

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
  public:
    string name;
    int age;
    Student(string name, int age){
      this->name = name;
      this->age = age;
    }
};

bool compare(Student a, Student b){
  if(a.name == b.name){
    return a.age > b.age;
  }else{
    return a.name < b.name;
  }
}


int main(){
  vector<Student> vec;
  vec.push_back(Student("a", 10));
  vec.push_back(Student("b", 5));
  vec.push_back(Student("c", 7));
  vec.push_back(Student("a", 12));
  vec.push_back(Student("d", 16));

  sort(vec.begin(), vec.end(), compare);

  for(int i = 0 ; i < vec.size(); i++){
    cout << vec.at(i).name << " : " << vec.at(i).age << endl;
  }

  return 0;
}
