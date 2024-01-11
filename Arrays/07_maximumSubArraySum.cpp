#include<iostream>
#include<climits>
using namespace std;


// Q. find Maximum contigious sub-array sum.(with indexes)[O(n)]
// Kedende Algorithm [V.Imp]. 



int findMaximumSubArraySum(int * arr , int size) {

	int max_so_far = INT_MIN, max_ending_here = 0, start = 0 , end = 0, s = 0;


	for (int i = 0; i < size; i++) {

		// Each time add the values of the array.
		max_ending_here += arr[i];

		/*
				// if after added the current value if max_ending_here is greater
				 than previous then update max_so_far.

				 */

		if (max_so_far < max_ending_here) {
			max_so_far = max_ending_here;
			end = i;
			start = s;
			end = i;
		}

		if (0 > max_ending_here) {
			max_ending_here = 0;
			s = i + 1;
		}
	}

	cout << start << " " << end << endl;

	return max_so_far;
}


void solve() {

	// Write code here


	int arr [] = { -2, -3, 4, -1, -2, 1, 5, -3};

	int n = sizeof(arr)/sizeof(arr[0]);

	int result = findMaximumSubArraySum(arr, n);


	cout << "Maximum sub-array sum will be " << result << endl;


}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}