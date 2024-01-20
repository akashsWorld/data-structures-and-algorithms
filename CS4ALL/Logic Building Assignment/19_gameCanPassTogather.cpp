#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..


	int n, m, p;
	cin >> n;

	bool arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		arr[temp - 1] = true;
	}

	cin >> p;
	for (int i = 0; i < p; i++) {
		int temp;
		cin >> temp;
		arr[temp - 1] = true;
	}

	for (int i = 0 ; i < n; i++) {
		if (!arr[i]) {
			cout << "Oh, my keyboard!" << endl;
			return;
		}
	}

	cout << "I become the guy." << endl;


}

int32_t main() {

	solve();

	return 0;
}