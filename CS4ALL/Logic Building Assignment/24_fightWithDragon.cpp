#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
#define int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int s, n;
	cin >> s >> n;

	bool cond = true;
	pair<int, int> arr[n];
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		arr[i].first = x;
		arr[i].second = y;
	}

	sort(arr, arr + n);


	for (int i = 0; i < n; ++i)
	{
		pair<int , int> curr = arr[i];
		if (s <= curr.first) {
			cond = false;
			break;
		}
		s += curr.second;
	}

	if (cond)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


}

int32_t main() {

	solve();

	return 0;
}