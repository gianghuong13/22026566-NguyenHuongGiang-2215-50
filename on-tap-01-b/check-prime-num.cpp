#include<bits/stdc++.h>
using namespace std;
bool snt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}
int main() {
	int n; cin >> n;
	if (snt(n)) cout << "yes";
	else cout << "no";
	return 0;
}