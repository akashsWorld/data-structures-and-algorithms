#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

void mySolution() {
	int n, m;
	cin >> n >> m;

	int arr[m];

	for (int i = 0; i < m; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + m);

	int j = m - 1;

	int mn = INT_MAX;
	while ((j - n + 1) >= 0) {
		int temp = arr[j] - arr[j - n + 1];
		if (temp < mn)
			mn = temp;
		j--;
	}
	cout << mn << endl;
}


void solve() {

	// Write code here..

	mySolution();



}

int32_t main() {

	solve();

	return 0;
}