#include<iostream>
#include<climits>
using namespace std;

// Q. Minimum number of jumps need to reach the last index of the array.


// N.B: Each index value of the array is the maximum steps can jump at one time.


int minJump(int *arr , int currPos, int maximumHeight) {

	// Recurrsive approach

	if (currPos == maximumHeight) {
		return 0;
	}

	if (arr[currPos] == 0)
		return INT_MAX;


	int min_jump = INT_MAX;
	for (int i = currPos + 1; i <= maximumHeight and i <= arr[currPos] + currPos ; i++) {
		int jumps = minJump(arr, i, maximumHeight);

		// (jumps+1)
		if (jumps != INT_MAX and jumps + 1 < min_jump) {
			min_jump = jumps + 1;
		}
	}

	return min_jump;
}

int minJumpDP(int * arr, int currPos, int maxPos, int * memo) {

	// This approach is more efficiant.

	if (currPos == maxPos) {
		return 0;
	}

	if (memo[currPos] != INT_MAX) {
		return memo[currPos];
	}

	int min_jump = INT_MAX;

	for (int i = arr[currPos]; i > 0; i--) {


		if (currPos + i <= maxPos) {

			min_jump = min(min_jump, 1 + minJumpDP(arr, currPos + i, maxPos, memo));

		}
	}

	return memo[currPos] = min_jump;

}


void solve() {

	// Write code here


	int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int * memo = new int[n];

	for (int i = 0; i < n; i++) {
		memo[i]=INT_MAX;
	}

	cout << minJumpDP(arr, 0, n - 1,memo) << endl;

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}