#include<bits/stdc++.h>
using namespace std;
void prefix_sum (int a[], int n) {
	for (int i = 1; i < n; i++) {
		a[i] = a[i] + a[i-1];
	}
}
int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	prefix_sum(a, n);
	int sum = 0;
	for (int i = 0; i < n-1; i++) {
		sum += a[i];
	}
	cout << sum;
	return 0;
}