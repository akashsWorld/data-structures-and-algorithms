#include<iostream>
using namespace std;
#define int long long int
#define MAX_LEN 10000

void internetSolution() {
	int x, n, m;
	while (cin >> n >> m)
	{
		if (m > n)
			x = -1;
		else
		{
			if (n % 2 == 0)
				x = n / 2;
			else
				x = (n / 2) + 1;
			while (x % m != 0)
			{
				x++;
			}
		}

		cout << x;
	}
}

void mySolution() {
	int n, m, x;
	cin >> n >> m;

	if (m > n) {
		cout << "-1" << endl;
	} else {
		if (n % 2 == 0)
			x = n / 2;
		else
			x = (n / 2) + 1;

		while (x % m != 0) {
			x++;
		}
		cout << x << endl;
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