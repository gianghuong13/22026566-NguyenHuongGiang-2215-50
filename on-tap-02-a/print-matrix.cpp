#include<bits/stdc++.h>
using namespace std;
void print(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i + j - 1 <= n) {
				cout << i + j  - 1 << " ";
			} else {
				cout << i + j - n - 1 << " ";
			}
		}
		cout << endl;
	}
}
int main() {
    int n; cin >> n;
	print(n);
	return 0;
}