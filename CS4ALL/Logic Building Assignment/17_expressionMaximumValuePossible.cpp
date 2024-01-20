#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..


	int m, o, p;

	cin >> m >> o >> p;
	int arr[6];

	arr[0] = m * (o + p);
	arr[1] = (m * o) + p;
	arr[2] = m * o * p;
	arr[3] = m + p + o;
	arr[4] = m + (o * p);
	arr[5] = (m + o) * p;

	int mx = arr[0];
	for (int i = 1; i < 6; ++i)
	{
		if (arr[i] > mx)
			mx = arr[i];
	}

	cout << mx << endl;

}
int32_t main() {

	solve();

	return 0;
}