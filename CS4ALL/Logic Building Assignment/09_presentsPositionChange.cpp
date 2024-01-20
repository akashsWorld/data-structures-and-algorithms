#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

int * changePosition(int * arr, int size) {

	int * resArr = new int[size];


	for (int i = 0; i < size; i++) {
		resArr[arr[i] - 1] = i + 1;
	}

	return resArr;
}

void solve() {

	// Write code here..

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int * resArr = changePosition(arr, n);

	for (int i = 0; i < n; i++) {
		cout << resArr[i] << " ";
	}
	cout << endl;
	delete []resArr;
}

int32_t main() {

	solve();

	return 0;
}