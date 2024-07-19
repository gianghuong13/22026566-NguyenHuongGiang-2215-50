#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
	if (b==0) return a;
	return gcd(b, a%b);
}
void phansotoigian(int tu, int mau) {
	int ucln = gcd(abs(tu), abs(mau));
	if (tu >= 0 && mau < 0) {
		tu = -tu;
		mau = -mau;
	}
	tu /= ucln;
	mau /= ucln;
	if (mau == 1) cout << tu << endl;
	else if (tu<0&&mau<0) {
		cout << -tu << "/" << -mau << endl;
	}
	else cout << tu << "/" << mau << endl;
}
int main() {
	int tu, mau; cin >> tu >> mau;
	phansotoigian(tu, mau);
	return 0;
}