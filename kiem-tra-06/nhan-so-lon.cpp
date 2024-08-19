#include<bits/stdc++.h>
using namespace std;
string multiply(string num, int n) {
    int carry = 0;
    string res = "";
    for (int i = num.length()-1; i >= 0; i--) {
    	char c = num[i];
        int tmp = n * (c - '0') + carry;
        res = to_string(tmp%10) + res;
        carry = tmp/10;
    }
    if (carry > 0) res = to_string(carry) + res;
    return res;
}
int main() {
    string num; 
    int n;
    cin >> num >> n;
    cout << multiply(num,n);
}
