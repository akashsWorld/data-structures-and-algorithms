#include<iostream>
#include<climits>
using namespace std;

// Find maximum and minimum element in an array.

pair<int,int> findMaximumAndMinimum(int * arr,int size){

	int maxEle =INT_MIN , minEle =INT_MAX;

	while(size){

		if(maxEle<arr[size-1]){
			maxEle= arr[size-1];
		}

		if(minEle>arr[size-1]){
			minEle= arr[size-1];
		}
		size--;
	}




	return make_pair(maxEle,minEle);

}



void solve() {

	// Write code here


	int n ;
	cin>>n;

	int arr[n];


	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

	pair<int,int> maxAndMin = findMaximumAndMinimum(arr,n);

	cout<<maxAndMin.first<<endl;
	cout<<maxAndMin.second<<endl;

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}