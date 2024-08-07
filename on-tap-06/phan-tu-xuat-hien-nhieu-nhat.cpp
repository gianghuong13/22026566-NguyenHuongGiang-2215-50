#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int _max_freq = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > _max_freq) {
            _max_freq = it->second;
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second == _max_freq) {
            cout << it->first;
            break;
        }
    }
}
