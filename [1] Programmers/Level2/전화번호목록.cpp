#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	for (int i = 0; i < phone_book.size(); i++){
		for (int j = 0 ; j < phone_book.size(); j++){
			if (i == j)
				continue;

			if (phone_book.at(i).size() > phone_book.at(j).size())
				continue;
			else{
				// size_t found = phone_book.at(j).find(phone_book.at(i));
				// if (found == 0){
				// 	answer = false;
				// 	return answer;
				// }
                long result = phone_book.at(j).find(phone_book.at(i));
				if (result != string::npos){
					answer = false;
					return answer;
				}

			}
		}
	}
	return answer;
}
