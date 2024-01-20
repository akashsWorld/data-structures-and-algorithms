#include<iostream>
#include<climits>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

// Edge case:- if the indexes are crossed then the both element swap together so overall swap reduced by 1.

void internetSolution() {
	int n, a;
	cin >> n >> a;
	int mina(a), maxa(a), mini(0), maxi(0);
	for (int i = 1; i < n; ++i)
	{
		cin >> a;
		if (a > maxa)
		{
			maxa = a;
			maxi = i;
		}
		if (a <= mina)
		{
			mina = a;
			mini = i;
		}
	}
	cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
}

void mySolution() {
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int mn = arr[n - 1] , mx = arr[0];

	int i = 0, j = n - 1, k = 0, l = n - 1;

	while (k<n or l >= 0) {
		if (arr[k] > mx) {
			mx = arr[k];
			i = k;
		}

		if (arr[l] < mn) {
			mn = arr[l];
			j = l;
		}
		l--;
		k++;
	}

	cout << i + (n - j - 1) - (j < i ? 1 : 0) << endl;
}


void solve() {

	// Write code here..


	// internetSolution();
	mySolution();
}

int32_t main() {

	solve();

	return 0;
}