#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

//  The sticks can only remove from intersection point.(Means in each move 2 Sticks are removed)


void solve() {

	// Write code here..

	int n, m;
	cin >> n >> m;

	// find the number of possible moves can make.

	/*In Each move m and n are reduced by 1. so from m and n which have minimum value only that time a move possible
		So if the number of moves is 2 them malvika won, if 3 then Aksath won.

		so for even number of moves malvika won and for odd number of moves Aksath won.
	*/

	int mn = min(m, n);


	if (mn % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;


}

int32_t main() {

	solve();

	return 0;
}