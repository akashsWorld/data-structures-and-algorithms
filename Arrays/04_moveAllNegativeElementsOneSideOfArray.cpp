#include<iostream>
using namespace std;

// Q. Move all Negative numbers to one end of the array.

void moveAllNegativeElementOneEnd(int * arr, int size) {

	int lo = 0, hi = 0;

	while (hi < size) {

		if (arr[hi] < 0) {
			swap(arr[hi], arr[lo]);
			lo++;
			hi++;
		} else {
			hi++;
		}
	}

}


void solve() {

	// Write code here




	int n;
	cin >> n;
	int arr[n];


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	moveAllNegativeElementOneEnd(arr, n);


	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl;




}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}