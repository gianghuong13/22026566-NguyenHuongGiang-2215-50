#include<bits/stdc++.h>
using namespace std;

void siamese_method(int n) {
	int square[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			square[i][j] = 0;
		}
	}
	square[0][n/2] = 1;
	int start = 1;
	int x = 0, y = n/2;

	while (x <= n && y % n <= n && start < n * n) {
		if (x == 0) {
			x = n;
		}
		int new_x = (x-1)%n;
		int new_y = (y+1)%n;
		if (square[new_x][new_y] == 0) {
			square[new_x][new_y] = ++start;
			x = new_x;
			y = new_y;
		} else {
			square[(x+1)%n][y] = ++start;
			x = (x+1)%n;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << square[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int n; cin >> n;
	siamese_method(n);
	return 0;
}