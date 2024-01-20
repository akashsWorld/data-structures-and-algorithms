#include<iostream>
using namespace std;
#define int long long int
#define MAX_LEN 10000

// The solution should complete in O(1). not O(n).
void mySolution() {

	int n, k;

	cin >> n >> k;

	// It failed because the array size cant take over 10000 in a function.
	int arr[n];

	int ind = 0;

	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
			arr[ind++] = i;
	}

	for (int i = 2; i <= n; ++i)
	{
		if (i % 2 == 0)
			arr[ind++] = i;
	}

	cout << arr[k - 1] << endl;

}

void internetSolution() {
	long long n, k;
	cin >> n >> k;
	if (k <= (n + 1) / 2)
	{
		cout << k * 2 - 1 << endl;
	}
	else
	{
		cout << (k - (n + 1) / 2) * 2 << endl;
	}

}


void solve() {

	// Write code here..

	internetSolution();



}

int32_t main() {

	solve();

	return 0;
}