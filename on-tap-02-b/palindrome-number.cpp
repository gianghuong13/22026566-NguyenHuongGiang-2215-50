#include<bits/stdc++.h>
using namespace std;
bool check_sodoiguong(int n) {
	string s = to_string(n);
	int len = s.size();
	for (int i = 0; i < len/2; i++) {
		if (s[i] != s[len-1-i]) {
			return false;
		}
	}
	return true;
}

int dem_sodoiguong(int a, int b) {
	int cnt = 0;
	for (int num = a; num <= b; num++) {
		if (check_sodoiguong(num)) {
			cnt++;
		}
	}
	return cnt;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		cout << dem_sodoiguong(a, b);
		cout << endl;
	}
	return 0;
	
}