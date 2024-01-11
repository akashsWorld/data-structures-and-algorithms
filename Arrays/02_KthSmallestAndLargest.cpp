#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

// Q. Find the "K^th" max and min element in an array.


// This approach works on the basis of sorting.
pair<int,int> findKthMaxAndMinElementInArraySortingApproach (int * arr, int size, int k){

// At first sort the array.
sort(arr,arr+size);
int kthSmall= arr[k-1],KthLarge= arr[size-k-1];
return  make_pair(kthSmall,KthLarge);
}


// This approach works on binary search algorithm.


int count(int *arr, int size, int mid);



int findTheKthLargestElementOfTheArrayBinarySearchApproach(int * arr, int size, int k){


	int large= INT_MIN, small= INT_MAX;

	// Find the largest and smallest element in the array.
	for(int i =0;i<size;i++){
		if(arr[i]>large){
			large= arr[i];
		}

		if(arr[i]<small){
			small = arr[i];
		}
	}


	while(large>small){
		// find the middle element of the given range in the array.
		int mid = small + (large-small)/2;

		int countOfElements = count(arr, size, mid);

		if(countOfElements<k)
			large= mid-1;
		else
			small= mid;

		cout<<large<<" "<<small<<endl;
	}

	return large;
}

int count(int *arr, int size, int mid){
	// Function that calculate number of values greater than equal to mid.
	int cnt=0;
	for(int i=0; i<size ;i++){
		if(arr[i]>=mid)
			cnt++;
	}
	return cnt;
}




void solve() {

	// Write code here



	int n;
	cin>>n;
	int arr[n];

	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

	// pair<int,int> kthLargeAndSmall = findKthMaxAndMinElementInArraySortingApproach(arr,n,2);


	// cout<<kthLargeAndSmall.first<<endl;
	// cout<<kthLargeAndSmall.second<<endl;


	cout<<findTheKthLargestElementOfTheArrayBinarySearchApproach(arr,n,4)<<endl;

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}