#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    int sum = 0;
    set<int> seA;
    set<int> seB;
    
    for (int i = 0; i < n; i++) {
		int x; cin >> x;
		seA.insert(x);
	} 
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	seB.insert(x);
	}
	
	auto it1 = seA.begin();
	while (it1 != seA.end()) {
		if (seB.find(*it1) == seB.end()) {
			sum+=*it1;
		}
		it1++;
	}
	auto it2 = seB.begin();
	while (it2 != seB.end()) {
		if (seA.find(*it2) == seA.end()) {
			sum+=*it2;
		}
		it2++;
	}
    cout << sum;
    return 0;
}
