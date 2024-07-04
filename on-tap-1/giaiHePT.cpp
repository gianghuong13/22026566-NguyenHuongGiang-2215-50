#include<bits/stdc++.h>
using namespace std;

int main() {
	int a1, b1, c1, a2, b2, c2; cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int d = a1*b2-a2*b1;
	int dx = c1*b2- c2*b1;
	int dy = a1*c2-a2*c1;
	if (d == 0) {
	    if (dx + dy == 0) cout << "Vo so nghiem";
	    else cout << "Vo nghiem";
	} else {
	    cout << "x = " << dx/d << ", y = " << dy/d;
	}
	return 0;
}
