#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

void mySolution() {
	int n;
	cin >> n;

	int home[n], guest[n];
	for (int i = 0 ; i < n; i++) {
		cin >> home[i];
		cin >> guest[i];
	}

	int ans = 0;
	for (int i = 0 ; i < n; i++) {
		int count = 0;
		int curr = home[i];
		for (int j = 0; j < n; j++) {
			if (curr == guest[j])
				count++;
		}
		ans += count;
	}
	cout << ans << endl;
}
void solve() {

	// Write code here..


	mySolution();


}

int32_t main() {

	solve();

	return 0;
}