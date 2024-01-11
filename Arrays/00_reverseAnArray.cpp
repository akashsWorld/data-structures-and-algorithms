#include<iostream>
using namespace std;

// Reverse an array.


void solve() {

	// Write code here


	int n;
	cin>> n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

	int i =0;
	int j=n-1;

	while(i<j){
		swap(arr[i++],arr[j--]);
	}

	// Print the values of the array.
	for(int i =0;i<n;i++){
		cout<<arr[i];
	}

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}