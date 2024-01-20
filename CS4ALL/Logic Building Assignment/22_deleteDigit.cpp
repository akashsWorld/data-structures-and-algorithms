#include<iostream>
using namespace std;
#define int long long int
#define MAX_LEN 10000


string delDegit(string str , int pos) {

	if (pos == 0) {
		str.erase(str.length() - 1);
	}
	else {
		str.erase(str.end() - 2);
	}

	if (str.data() == "-0")
		return "0";

	return str.data();
}
void solve() {

	// Write code here..

	string str;
	getline(cin, str);

	int num = stoi(str);

	if (num >= 0) {
		cout << num << endl;
		return;
	}

	int pos1 = stoi(delDegit(str.data(), 0));
	int pos2 = stoi(delDegit(str.data(), 1));

	cout << max(pos1, pos2) << endl;



}

int32_t main() {

	solve();

	return 0;
}