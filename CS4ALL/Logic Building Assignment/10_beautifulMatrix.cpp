#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int ** arr = new int* [5];

	for (int i = 0; i < 5; i++) {
		arr[i] = new int[5];
	}

	int r = 0, c = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			int val;
			cin >> val;
			arr[i][j] = val;
			if (val == 1) {
				r = i;
				c = j;
			}

		}
	}

	cout << abs(2 - r) + abs(2 - c) << endl;
}

int32_t main() {

	solve();

	return 0;
}