#include<iostream>
using namespace std;

// Q. Rotate the array Cyclically by One.[O(n)]



void rotate(int * arr, int size) {


	int last_ele = arr[size - 1];

	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}

	arr[0] = last_ele;

}

void rotateWithLoop(int * arr, int size) {

// This is more logical
	
	int i = 0, j = size - 1;

	while (i != j) {
		swap(arr[i],arr[j]);
		i++;
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


	rotateWithLoop(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;





}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}