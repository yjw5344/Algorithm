#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int solution(vector<int> arr) {
	sort(arr.begin(), arr.end());
	if (arr.size() == 1){
		return arr.at(0);
	} else{
		int num = arr.at(0);
		for (int i = 1; i < arr.size(); i++){
			num = (num * arr.at(i)) / gcd(num, arr.at(i));
		}
		return num;
	}
}
