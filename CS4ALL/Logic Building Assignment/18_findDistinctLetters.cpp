#include<iostream>
#include<cstring>
using namespace std;
#define Int long long int
#define MAX_LEN 10000


void solve() {

	// Write code here..

	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}
	char str[MAX_LEN];

	cin.getline(str, MAX_LEN);


	int len = strlen(str);

	for (int i = 1; i < len; i += 3) {
		int curr = str[i];

		if (arr[curr - 97] == 0) {
			arr[curr - 97]++;
		}
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0)
			count++;
	}

	cout << count << endl;

}

int32_t main() {

	solve();

	return 0;
}