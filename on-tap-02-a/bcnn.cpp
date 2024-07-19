#include<bits/stdc++.h>
using namespace std;
int bcnn (int a, int b) {
	int bc;
	if (a== 0 || b == 0) return 0;
	for (int i = 1; i < a * b; i++) {
		bc = a * i;
		if (bc % b == 0) return bc;
	}
	return 0;
}
int main() {
	int x, y; cin >> x >> y;
	if (x < 0) x = -x;
	if (y < 0) y = -y;
	cout << bcnn(x,y);
	return 0;
}