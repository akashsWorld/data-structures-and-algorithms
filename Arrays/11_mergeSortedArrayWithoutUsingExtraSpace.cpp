#include<iostream>
#include<algorithm>
using namespace std;

// Q. Merge two sorted arrays withour using extra space.

void merge(int arr1[], int arr2[], int m, int n)
{

	// This approach is preety efficiant but there are many efficiant approach available, so checkout them.
	int i = 0, j = 0, k = m - 1;

	while (i <= k && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else {
			swap(arr2[j++], arr1[k--]);
		}
	}

	// After the loop each element is present in the array where it meeds to be but unsorted.

	// Sort first array
	sort(arr1, arr1 + m);

	// Sort second array
	sort(arr2, arr2 + n);
}


void solve() {

	// Write code here


	int arr1[] = { 1, 5, 9, 10, 15, 20 };
	int arr2[] = { 2, 3, 8, 13 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	
	merge(arr1, arr2, m, n);

	cout << "After Merging \nFirst Array: ";
	for (int i = 0; i < m; i++)
		cout << arr1[i] << " ";
	cout << "\nSecond Array: ";
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";

}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}