#include  <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
		int cnt = 1;
	sort(nums.begin(), nums.end());

	int pivot = nums.at(0);
	for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++){
		if ( *iter != pivot){
			pivot = *iter;
			cnt++;
		}
	}

	int N = nums.size() / 2;

	if (cnt >= N){
		return N;
	}
	else{
		return cnt;
	}
}
