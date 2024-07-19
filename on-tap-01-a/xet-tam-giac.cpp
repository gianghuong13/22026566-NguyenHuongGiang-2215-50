#include<bits/stdc++.h>
using namespace std;
int chuvi (int a, int b, int c) {
	return a+b+c;
}
int main() {
	int a, b, c; cin >> a >> b >> c;
	if ((a+b>c && a+c>b) && b+c>a) {
		if (a==b && b==c) {
			cout << chuvi(a,b,c) << endl;
			cout << "deu";
		} else if (a == b || b == c || a == c) {
			cout << chuvi(a,b,c) << endl;
			cout << "can";
		} else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) {
			cout << chuvi(a,b,c) << endl;
			cout << "vuong";
		} else {
		    cout << chuvi(a,b,c) << endl;
			cout << "thuong";
		}
	} else {
		cout << "Invalid";
	}
	return 0;
}
