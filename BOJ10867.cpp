#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {	// 중복 빼고 정렬하기
	int n;
	cin >> n;

	vector<int> arr;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int num : arr) {
		cout << num << " ";
	}

	cout << endl;
	return 0;
}	// end of main