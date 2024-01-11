#include<iostream>
#include<algorithm>
using namespace std;

// Q. Minimize the maximum difference between the heights.
/*

Main idea is to minimize the maximum height of two towers.

	if initially maximum height difference is (a) then after this function and decrease or increase (k) the maximum height will be (r<a).
*/

int findMaximumHeightDifference(int * arr, int size, int k) {

// Not underastand completely
	sort(arr,arr+size);

	int tempMin = arr[0];
	int tempMax = arr[size-1];

	int ans = tempMax-tempMin;


	for(int i =1;i<size;i++){

		if((arr[i]-k)<0)
			continue;


		tempMin = min(arr[0]+k,arr[i]-k);


		tempMax = max(arr[i-1]+k,arr[size-1]-k);


		ans = min(ans,tempMax-tempMin);

	}

	return ans;
}

void solve() {

	// Write code here


	int arr[] = { 7, 4, 8, 8, 8, 9 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int k = 6 ;


	cout << findMaximumHeightDifference(arr, n, k) << endl;






}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}