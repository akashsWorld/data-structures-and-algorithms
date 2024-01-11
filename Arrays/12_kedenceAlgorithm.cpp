#include<iostream>
#include<climits>
using namespace std;


// Q. Kedence Algorithm.(Contiguos sub-array sum).

int kedenceAlgorithm(int * arr, int size ){

	int max_so_far = 0, start =0, end = 0, s=0, max =INT_MIN;


	for(int i =0;i<size;i++){

		max_so_far+=arr[i];

		if(max_so_far>max){
			max=max_so_far;
			end = s;
			s++;
		}

		if(max_so_far<0){
			max_so_far = 0;
			start=i+1;
		}

	}

	cout<<start<<" "<<end<<endl;
	return max;

}


void solve() {

	// Write code here


// int n = 5;
// int arr[] = {1,2,3,-2,5};



int n = 4;
int arr[] = {-1,-2,-3,-4};

cout<<kedenceAlgorithm(arr,n)<<endl;




}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}