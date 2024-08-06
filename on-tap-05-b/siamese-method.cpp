#include<bits/stdc++.h>
using namespace std;
void fill (int n) {
    vector<vector<int>> matrix(n, vector<int>(n,0));
    int i = 0;
    int j = n/2;
    int k = 1;
    matrix[i][j] = k++;
    while(k<=n*n) {
        int new_i = (i-1+n)%n;
        int new_j = (j+1)%n;
        if(matrix[new_i][new_j] == 0) {
            matrix[new_i][new_j] = k++;
        } else {
            new_i = (i+1)%n;
            new_j = j;
            matrix[new_i][new_j] = k++;
        }
        i = new_i;
        j = new_j;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int n; cin >> n;
    fill(n);
    return 0;
}