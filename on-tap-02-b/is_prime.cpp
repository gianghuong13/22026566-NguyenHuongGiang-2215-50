#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}
int prime[1000001];
void sangsnt() {
	for (int i = 2; i < 1000001; i++) {
		prime[i] = 1;
	}
	
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (prime[i]) {
			for (int j = i * i; j <= 1000000; j+=i) {
				prime[j] = 0;
			}
		}
	}
}
void print_prime(int n) {
    sangsnt();
	for (int i = 2; i < n; i++) {
		if (prime[i]) cout << i << endl;
	}
}
