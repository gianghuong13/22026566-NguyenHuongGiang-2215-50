#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    n = n+1;
    vector<vector<int>> matrix(n,vector<int>(n,0));
    for (int i = 0; i < n; i++) {
        matrix[i][0] = 1;
        matrix[i][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i; j++) {
            matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}