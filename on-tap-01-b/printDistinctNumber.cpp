#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int prev = -2;
	while (cin >> n) {
		if (n != prev) {
			cout << n << " ";
			prev = n;
		}
		else cout << "";
		if (n < 0) break;
	}
	return 0;
}
