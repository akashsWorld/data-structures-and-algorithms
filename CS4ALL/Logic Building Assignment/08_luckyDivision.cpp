#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000




void solve() {

	// Write code here..

	int n;
	cin >> n;

	if (n % 4 == 0 or n % 7 == 0 or n % 44 == 0 or n % 47 == 0 or n % 74 == 0 or n % 77 == 0 or n % 444 == 0 or n % 447 == 0 or n % 474 == 0 or n % 477 == 0 or n % 744 == 0 or n % 747 == 0 or n % 777 == 0 ) {
		cout << "YES" << endl;
	} else
		cout << "NO" << endl;


}

int32_t main() {

	solve();

	return 0;
}