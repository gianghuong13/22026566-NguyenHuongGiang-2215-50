#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<long long> a;
	for (int i = 0; i < n; i++) {
	    int tmp; cin >> tmp;
	    a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	long long _min = a[n-1] - a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] - a[i-1] < _min) {
			_min = a[i] - a[i-1];
		}
	}
	cout << _min;
	return 0;
}
