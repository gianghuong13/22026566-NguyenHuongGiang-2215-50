#include<bits/stdc++.h>
using namespace std;
void update(int* a, int* b) {
	int tong = abs(*a + *b);
	int hieu = abs(*a-*b);
	*a = tong;
	*b = hieu;
}
int main() {
	int* pa = new int;
	int* pb = new int;
	int a, b; cin >> a >> b;
	*pa = a;
	*pb = b;
	update(pa, pb);
	cout << *pa << endl << *pb;
	return 0;
}
