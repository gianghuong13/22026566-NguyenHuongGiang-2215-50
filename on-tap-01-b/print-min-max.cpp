#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	double _min = INT_MAX;
	double _max = INT_MIN;
	while (n--) {
		double t; cin >> t;
		if (t < _min) _min = t;
		if (t > _max) _max = t;
	}
	cout << _max << endl << _min;
	return 0;
}