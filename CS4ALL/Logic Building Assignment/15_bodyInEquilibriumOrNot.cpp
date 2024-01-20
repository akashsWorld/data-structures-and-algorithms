#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int n, x, y, z, xsum(0), ysum(0), zsum(0);
	cin >> n;
	int sol = 0;
	while (n--) {

		cin >> x >> y >> z;

		xsum += x;
		ysum += y;
		zsum += z;
	}

	if (xsum == 0 and ysum == 0 and zsum == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


}

int32_t main() {

	solve();

	return 0;
}