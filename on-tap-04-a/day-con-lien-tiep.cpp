#include<bits/stdc++.h>
using namespace std;
bool check(int n, int m, int a[], int b[]) {
    for (int i = 0; i <= m - n; i++) {
        bool check = true;
        for (int j = 0; j < n; j++) {
            if (b[i+j] != a[j]) {
                check = false;
                break;
            }
        }
        if (check) return true;
    }
    return false;
}
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];
    if (check(n,m,a,b)) cout << "YES";
    else cout << "NO";
    return 0;
}