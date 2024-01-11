#include<iostream>
using namespace std;

// Q. Sort an array consits of 0's, 1's and 2's/ Dutch national flag algorithm.


void sortArray(int * arr, int size){

	int mid=0,lo=0,hi=size-1;


	while(mid<=hi){
		if(arr[mid]==0){
			// When arr[mid]==0
			swap(arr[mid],arr[lo]);
			mid++;
			lo++;
		}else if(arr[mid]==1){
			mid++;
		}else{
			swap(arr[hi],arr[mid]);
			hi--;
		}

	}
}


void sortArrayUsingCountApproach(int * arr, int size){
	// This algorithm uses constan space.

	int tempArray [3];

	for(int i =0;i<3;i++){
		tempArray[i]=0;
	}

	for(int i =0;i<size;i++){
		int temp = arr[i];
		tempArray[temp]++;
	}

	int index = 0;
	for(int i =0;i<3;i++){
		int temp = tempArray[i];

		while(temp--){
			arr[index++]=i;
		}
	}
}


void solve() {

	// Write code here


	int n ;
	cin>>n;
	int arr[n];

	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

	sortArrayUsingCountApproach(arr,n);

	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}