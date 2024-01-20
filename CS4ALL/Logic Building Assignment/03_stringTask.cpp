#include<iostream>
#include<cstring>
#include<string>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

string toLowerCase(string &str) {
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
	return str;

}

bool is_present(char ch) {

	char vowels [] = {'a', 'y', 'e', 'i', 'o', 'u'};

	for (int i = 0; i < 6; i ++) {

		if (vowels[i] == ch)
			return true;
	}

	return false;

}

string stringTask(char *arr, int size) {


	string str = arr;

	str = toLowerCase(str);

	string resString = ".";

	int len = 0;
	while (len < size) {
		if (is_present(str[len])) {
			len++;
			continue;
		}
		resString += str[len];
		resString += ".";
		len++;
	}

	int lastIndex = resString.length() - 1;
	if (resString.at(lastIndex) == '.')
		resString.erase(lastIndex);

	return resString;
}

void solve() {

	// Write code here..

	char * arr = new char[MAX_LEN];

	cin.getline(arr, MAX_LEN);

	cout << stringTask(arr, strlen(arr)) << endl;
}

int32_t main() {

	solve();

	return 0;
}