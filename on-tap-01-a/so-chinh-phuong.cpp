#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int s = sqrt(n);
	if (s*s == n) cout << "YES";
	else cout << "NO";
}