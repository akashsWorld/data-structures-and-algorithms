#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

// (he)gsodrvjos(ll)tttur(o)
// this is also a true case where find the hello.


bool internetSolution(string s) {

	string target = "hello";

	int k = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == target[k]) {
			k++;
		}
	}
	if (k == target.length()) {
		return true;
	}
	return false;
}

void solve() {

	// Write code here..

	// ahhellllloou --------- YES
	// hlelo ------------- NO


	string str;
	getline(cin, str);



	bool cond = internetSolution(str);


	if (cond)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int32_t main() {

	solve();

	return 0;
}