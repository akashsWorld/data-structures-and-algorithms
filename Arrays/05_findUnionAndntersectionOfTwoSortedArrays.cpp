#include<iostream>
#include<climits>
using namespace std;

// Q. Find Union and Intersection of two sorted Arrays.

struct Node
{
public:
	Node * next;
	int data;
	Node(int data): data(data), next(NULL) {}

};

pair<int * , int> findUnion(int * arr1, int m, int * arr2, int n) {

	int i = 0, j = 0;

	Node * head = NULL;
	Node * tail = NULL;

	if (arr1[i] < arr2[j]) {
		head = tail = new Node(arr1[i++]);
	} else {
		head = tail = new Node (arr2[j++]);
	}



	int count = 1;


	while (i < m and j < n) {

		if (arr1[i] < arr2[j]) {
			Node * node =  new Node(arr1[i++]);
			tail->next = node;
			tail = node;
			count++;
		} else if (arr1[i] > arr2[j]) {
			Node * node =  new Node(arr2[j++]);
			tail->next = node;
			tail = node;
			count++;
		} else {
			Node * node = new Node(arr1[i]);
			tail->next = node;
			tail = node;
			i++; j++;
			count++;
		}
	}

	while (i < m) {

		Node * node = new Node(arr1[i++]);
		tail->next = node;
		tail = node;
		count++;
	}

	while (j < n) {
		Node * node = new Node(arr2[j++]);
		tail->next = node;
		tail = node;
		count++;
	}

	int *  newArray = new int[count];

	for (int i = 0; i < count; i++) {
		cout << head->data << endl;
		newArray[i] = head->data;
		head = head->next;
	}

	return {newArray, count};

}


int findMaxBetweenTwoArrays(int * arr1, int m, int *arr2, int n) {

	int i = 0 , j = 0, max = INT_MIN;

	while (i < m and j < n) {
		if (arr1[i] > arr2[j]) {
			if (arr1[i] > max)
				max = arr1[i];
			i++;
		} else if (arr1[i] < arr2[j]) {
			if (arr2[j] > max)
				max = arr2[j];
			j++;
		} else {
			if (arr1[i] > max)
				max = arr1[i];

			i++; j++;
		}
	}

	while (i < m) {
		if (arr1[i] > max)
			max = arr1[i];
		i++;
	}

	while (j < n) {
		if (arr1[j] > max)
			max = arr1[j];
		j++;
	}

	return max;

}

pair<int * , int> findIntersection(int * arr1, int m , int * arr2, int n) {


	int maxValue = findMaxBetweenTwoArrays(arr1, m, arr2, n)  + 1;


	int * arr = new int[maxValue];

	int restSize = 0;

	for (int i = 0; i < maxValue; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < m; i++) {
		if (arr[arr1[i]] == 0) {
			arr[arr1[i]]++;
			restSize++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[arr2[i]] == 1) {
			restSize++;
			arr[arr2[i]]++;
		}
	}

	int * resultArr = new int[restSize];

	int j = 0;
	for (int i = 0; i < maxValue; i++) {
		if (arr[i] == 2) {
			resultArr[j]=i;
			j++;
		}
	}

	delete[]arr;

	return {resultArr, j};

}

void solve() {

	// Write code here

	int m, n;
	cin >> m >> n;

	int arr1[m];
	int arr2[n];

	for (int i = 0; i < m; i++) {
		cin >> arr1[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> arr2[i];
	}

	pair<int * , int> array = findIntersection( arr1, m, arr2, n);

	for (int i = 0; i < array.second; i++) {
		cout << array.first[i] << " ";
	}
	cout << endl;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	solve();

	return 0;
}