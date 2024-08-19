#include<bits/stdc++.h>
using namespace std;

int main() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<vector<int>> painted(n, vector<int>(m,0));
	
	while (k--) {
		int x, y, w, h;
		cin >> x >> y >> w >> h;
		
		int x2 = x + w;
		int y2 = y + h;
		
		x = max(0,min(m, x));
		y = max(0,min(n, y));
		x2 = max(0,min(m, x2));
		y2 = max(0,min(n, y2));
		
		for (int i = y; i < y2; i++) {
			for (int j = x; j < x2; j++) {
				painted[i][j] = 1;
			}
		}
	}
	
	int unpaintedArea = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (painted[i][j] == 0) {
				unpaintedArea++;
			}
		}
	}
	
	cout << unpaintedArea;
	return 0;
}
