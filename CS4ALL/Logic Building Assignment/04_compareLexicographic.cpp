#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

string toLowerCase(string str) {

	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	return str;
}

string convertString(char * arr) {
	string s  = arr;
	return s;
}

int compareString(string str1, string str2) {

	str1 = toLowerCase(str1);
	str2 = toLowerCase(str2);

	if (str1 < str2)
		return -1;
	else if (str1 > str2)
		return 1;

	return 0;
}

void solve() {

	// Write code here..


	char str1[MAX_LEN], str2[MAX_LEN];

	cin.getline(str1, MAX_LEN);
	cin >> ws;
	cin.getline(str2, MAX_LEN);

	cout << compareString(str1, str2) << endl;
}

int32_t main() {

	solve();

	return 0;
}