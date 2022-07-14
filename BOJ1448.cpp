//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//#define MAX 1000001
//using namespace std;
//
//int arr[MAX];
//int BOJ1448() {
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//
//	for (int i = n - 3; i >= 0; i--) {
//		if (arr[i + 2] < arr[i + 1] + arr[i]) {
//			cout << arr[i + 2] + arr[i + 1] + arr[i] << endl;
//			break;
//		}
//		else if (i == 0) {
//			cout << -1 << endl;
//		}
//	}
//	return 0;
//}