#include<bits/stdc++.h>
using namespace std;

vector<int>dx = {0, 0, 1, -1, -1, 1, -1, 1};
vector<int>dy = {1, -1, 0, 0, -1, -1, 1, 1};

bool inBound(int x, int y, int m, int n) {
    return x>=0 && x<m && y>=0 && y<n;
}
int dem_min(vector<vector<char>> map, int m, int n, int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        int posX = x + dx[i];
        int posY = y + dy[i];
        if(inBound(posX,posY,m,n) && map[posX][posY]=='*') {
            cnt++;
        }
    }
    return cnt;
}
void game(vector<vector<char>>map, int m, int n) {
    vector<vector<char>> res(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] != '*') {
                int mine_num = dem_min(map, m, n, i, j);
                res[i][j] = '0' + mine_num;
            } else {
                res[i][j] = map[i][j];
            }
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
    int m, n; cin >> m >> n;
    vector<vector<char>> map(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    game(map, m, n);
    return 0;
}