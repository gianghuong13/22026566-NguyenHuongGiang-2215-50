#include<bits/stdc++.h>
using namespace std;
bool isOutsideScreen(int m, int n,  int x, int y, int w, int h) {
	int x2 = x + w;
	int y2 = y + h;
	if (x2 <= 0 || y2 <= 0 || x >= m || y >= n) {
		return true;
	}
	return false;
}
int main() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<int> trucx(m + 1, 0);
	
	while (k--) {
		int x, y, w, h;
		cin >> x >> y >> w >> h;
		
		if (isOutsideScreen(m,n,x,y,w,h) == false) {
			int x2 = x + w;
			x = max(0,min(m, x));
			x2 = max(0,min(m, x2));
		
			for (int i = x; i < x2; i++) {
				trucx[i] = 1;
			}
		} 	
	}
	
	
//	in cac doan
	for (int i = 0; i < m; i++) {
		if (trucX[i] == 1) {
			int cnt = 0;
			int j = i;
			while (trucX[j]==1 && j < m) {
				cnt++;
				j++;
			}
			cout << i << " " << i + cnt << endl;
		}
	}
	
//  in so doan roi nhau
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		if (trucx[i] == 1 && (i==0 || trucx[i-1] == 0)) {
			cnt++;
		}
	}
	cout << cnt; cout << endl;
	for (auto x : trucx) cout << x;
	return 0;
}
