#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int n ;
	cin >> n;

	int arr[n];

	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}


	sort(arr, arr + n);

	int minCoin = 0, count = 0;
	for (int i = n - 1; i >= 0; i--) {
		count += arr[i];
		minCoin++;
		if (count > ceil(sum / 2))
			break;
	}


	cout << minCoin << endl;


}

int32_t main() {

	solve();

	return 0;
}