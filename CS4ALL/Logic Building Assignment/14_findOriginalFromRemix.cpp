#include<iostream>
#include<cstring>
using namespace std;
#define Int long long int
#define MAX_LEN 10000

void mySolution() {
	string song ;

	getline(cin, song);

	char rem[] = {'W', 'U', 'B'};

	int songLen = song.length();
	int flag = 1;
	string str = "";
	for (int i = 0; i < songLen;) {
		if (rem[0] == song[i] and rem[1] == song[i + 1] and rem[2] == song[i + 2]) {
			if (!flag)
				str += " ";

			i += 3;
			continue;
		}
		flag = 0;
		str += song[i];
		i++;

	}
	cout << str << endl;
}

void internetSolution() {
	string s;
	int flag = 1;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			i += 2;
			if (!flag) {
				cout << " ";
			}
			continue;
		} else {
			flag = 0;
			cout << s[i];
		}
	}
}


void solve() {

	// Write code here..

	mySolution();

}

int32_t main() {

	solve();

	return 0;
}
