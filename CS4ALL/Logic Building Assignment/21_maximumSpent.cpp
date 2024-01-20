#include<iostream>
using namespace std;
#define int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int n, m, a, b;

	cin >> n >> m >> a >> b;

	if (m * a > b) {

		int remJourneyCostWith = (n % m) * a;

		if (remJourneyCostWith > b)
			cout << n / m*b + b << endl;
		else
			cout << n / m*b + remJourneyCostWith << endl;
	} else {
		cout << n*a << endl;
	}

}

int32_t main() {

	solve();

	return 0;
}
