#include<bits/stdc++.h>
using namespace std; 
bool binary_search(int a[], int x, int left, int right) {
	while (left <= right) {
		int mid = (right + left)/2;
		if (a[mid] == x) return true;
		if (a[mid] > x) {
			right = mid - 1;
		}
		if (a[mid] < x) {
			left = mid + 1;
		}
	}
	return false;
}
int main() {
	int n, m; cin >> n >> m;
	int a[n]; 
	for (int i = 0; i < n; i++) cin >> a[i];
	while (m--) {
		int x; cin >> x;
		if (binary_search(a,x,0,n-1)) cout << "YES ";
		else cout << "NO ";
	}
}