#include<bits/stdc++.h>
using namespace std;
bool inBound(int m, int n, int x, int y) {
	return x>=0 && y>=0 && x<m && y<n;
}
vector<int> dx = {0,0,-1,1,-1,-1,1,1}; //len, xuong, trai, phai, trai tren, trai duoi, phai tren, phai duoi
vector<int> dy = {-1,1,0,0,-1,1,-1,1};
int countMine(vector<vector<char>> map, int m, int n, int x, int y) {
	int cnt = 0;
	for (int i = 0; i <8; i++) {
			int x_pos = x + dx[i];
			int y_pos = y + dy[i];
			if (inBound(m,n,x_pos,y_pos) && map[x_pos][y_pos] == '*') {
				cnt++;
			}
		}
	return cnt;
}
void domin(vector<vector<char>> map, int m, int n) {
	vector<vector<char>> resMap(m, vector<char>(n, '0'));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '*') {
				resMap[i][j] = '*';
			} else {
				int mineNum = countMine(map, m, n, i, j);
				resMap[i][j] = '0' + mineNum;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << resMap[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int m, n; cin >> m >> n;
	vector<vector<char>> map(m, vector<char>(n));
	for (int i = 0; i < m; i++) {
		for (int j =0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	domin(map, m, n);
	return 0;
}

/*
3 5
***..
..*..
*..**

*/