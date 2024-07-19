#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a_min = INT_MAX, b_min = INT_MAX;
	for (int i = 1; i <=n; i++) {
		int a,b; cin >> a >> b;
		a_min = min(a_min, a);
		b_min = min(b_min, b);
	}
	cout << a_min * b_min;
	return 0;
}