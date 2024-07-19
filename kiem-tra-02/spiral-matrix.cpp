#include<bits/stdc++.h>
using namespace std;

vector<int> dc = {1,0,-1,0}; //right, down, left, up
vector<int> dr = {0,1,0,-1};
void spiralMatrix(int m, int n) {
	int res[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			res[i][j] = 0;
		}
	}
	int start = 1;
	int direct = 0; //go right
	int r = 0, c = 0;
	while (start <= m*n) {
		res[r][c] = start++;
		int newRow = r + dr[direct];
		int newCol = c + dc[direct];
		
		if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && res[newRow][newCol] == 0) {
			r = newRow;
			c = newCol;
		} else {
			direct = (direct + 1) % 4;
			r += dr[direct];
			c += dc[direct];
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
    int m, n;
    cin >> m >> n;
    spiralMatrix(m, n);
    return 0;
}