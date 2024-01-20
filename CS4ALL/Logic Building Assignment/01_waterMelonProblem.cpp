#include<iostream>
using namespace std;

// ASCII value of alphabets.
// (A - Z) 65 - 90
// (a - z) 97 - 122

void solve() {

	// Write code here


	int n ;

	cin >> n;

	if (n % 2 == 0 and (n / 2) % 2 == 0) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;

}


int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}