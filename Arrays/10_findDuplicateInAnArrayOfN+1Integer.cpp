#include<iostream>
using namespace std;

//  Q. Goal is to find the one duplicatte elememt present in the array.


int findTheDuplicateNumber(int * arr, int size) {

	int * countArr = new int[size];

	for (int i = 0; i < size ; i++) {
		countArr[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		countArr[arr[i]]++;
	}

	for (int i = 0; i < size; i++) {
		if (countArr[arr[i]] > 1) {
			return arr[i];
		}
	}


	return -1;
}

void solve() {

	// Write code here



	int arr [] = {1, 3, 4, 2, 2};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<findTheDuplicateNumber(arr,n)<<endl;







}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}