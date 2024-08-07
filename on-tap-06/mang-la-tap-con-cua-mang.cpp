#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n; cin >> m >> n;
    set<int> se;
    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (se.find(b[i]) == se.end()) {
            flag = false;
            break;
        }
    }
    if (!flag) cout << "No"; 
    else cout << "Yes";
    
}
