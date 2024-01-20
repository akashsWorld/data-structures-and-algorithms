#include<iostream>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


string sortString(string str) {


	int arr[3];

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;




	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] == '+')
			continue;
		else if (str[i] == '1')
			arr[0]++;
		else if (str[i] == '2')
			arr[1]++;
		else
			arr[2]++;
	}

	int ind = 0;
	string resString = "";
	for (int i = 0; i < 3; i++) {
		int temp = arr[i];
		while (temp--) {
			char ch = i + 1 + 48;
			resString += ch;
			resString += '+';
		}
	}

	int lastIndex = resString.length() - 1;

	resString.erase(lastIndex);
	return resString;
}


void solve() {

	// Write code here..

	string str;
	getline(cin, str);
	cout << sortString(str) << endl;
}

int32_t main() {

	solve();

	return 0;
}