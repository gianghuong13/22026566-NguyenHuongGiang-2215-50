#include<bits/stdc++.h>
using namespace std;

int dem(int n) {
	int cnt = 0;
	int tmp = n;
	while (tmp) {
		int digit = tmp % 10;
		if (digit == 0) {
			cnt += 0;
		}
		else {
			if (n % digit == 0) cnt++;
		}
		tmp/=10;
	}
	return cnt;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		cout << dem(x) << endl;
	}
	return 0;
}