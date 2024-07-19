#include<bits/stdc++.h>
using namespace std;
int tansuat[100];
int subsets (int a[], int n) {
	for (int i = 0; i < n; i++) {
		tansuat[a[i]]++;
	}
	int max_size_of_subsets = 0;
	for (int i = 1; i < 100; i++) {
		max_size_of_subsets = max(max_size_of_subsets, tansuat[i] + tansuat[i+1]);
	}
	return max_size_of_subsets;
}
int main() {
	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	cout << subsets(a, n);
	return 0;
}