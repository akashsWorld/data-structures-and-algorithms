#include<iostream>
#include<cstring>
using namespace std;
#define Int long long int

void convertLongString(char* arr, int size) {

	if (size > 10) {
		cout << arr[0] << size - 2 << arr[size - 1] << endl;
		return;
	}
	cout << arr << endl;
}

void solve() {

	// Write code here..

	int maxLen = 1000, n;
	cin >> n;
	char * arr = new char[10000];
	cin >> ws;
	while (n--) {
		cin.getline(arr, maxLen);
		convertLongString(arr, strlen(arr));
	}

}

int32_t main() {

	solve();

	return 0;
}