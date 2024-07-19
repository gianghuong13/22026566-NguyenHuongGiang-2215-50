#include<bits/stdc++.h>
using namespace std;
int main() {
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	int b = x1 - x2;
	int a = v1 - v2;
	if (a == 0) {
		if (b==0) cout << "YES";
		else cout << "NO";
	} else {
	    long long t = -1.0*b/a;
	    if (b%a == 0 && t > 0) cout << "YES";
	    else cout << "NO";
	}
	return 0;
}