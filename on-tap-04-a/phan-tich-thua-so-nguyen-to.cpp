#include<bits/stdc++.h>
using namespace std;
int snt[10001];
void sang() {
	for (int i = 2; i <= 10000; i++) {
		snt[i] = 1;
	}
	for (int i = 2; i <= sqrt(10000); i++) {
		if (snt[i]==1) {
			for (int j = i * i; j <=10000; j+=i) {
			snt[j] = 0;
		}
		}
	}
}
void phantich_thuaso_nt(int n) {
	int cnt[10001] = {0};
	for (int i = 2; i < 10001; i++) {
		if (snt[i]==1) {
			while (n%i==0) {
				cnt[i]++;
				n/=i;
			}
		}
	}
	for (int i = 0; i <= 1000; i++) {
		if (cnt[i] != 0) {
			cout << i << " " << cnt[i] << endl;
		}
	}
}
int main() {
    int n; cin >> n;
    sang();
    phantich_thuaso_nt(n);
    return 0;
}