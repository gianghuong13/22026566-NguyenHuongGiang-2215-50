#include<bits/stdc++.h>
using namespace std;
vector<string> ones = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> teens = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
	"eighteen", "nineteen"};
vector<string> tens = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string readTwoDigitNumber(int n) {
    if (n < 10) return ones[n];
    if (n < 20) return teens[n%10 - 1];
    if (n % 10 == 0 && n < 100) return tens[n/10 - 1];
    if (n % 10 != 0) {
        int first = n/10;
        int second = n%10;
        return tens[first - 1] + "-" + ones[second];
    }
    return "";
}
string readThreeDigitNumber(int n) {
	string res = "";
	if (n != 0 && n < 100) res = readTwoDigitNumber(n);
	else res += readTwoDigitNumber(n/100) + " hundred " + readTwoDigitNumber(n % 100);
	return res;
}
string readNumber(int n) {
	if (n < 100) return readTwoDigitNumber(n);
	if (n < 1000) return readThreeDigitNumber(n);
	if (n < 1000000) {
		int first = n / 1000;
		return readThreeDigitNumber(first) + " thousand " + readThreeDigitNumber(n%1000);
	}
	if (n < 1000000000) {
		string res = "";
		res += readThreeDigitNumber(n/1000000) + " million ";
		n %= 1000000; 
		if (n/1000 > 0) res += readThreeDigitNumber(n/1000) + " thousand "; 
		else res += "";
		n %= 1000;
		if (n > 0) res += readThreeDigitNumber(n);
		else res += "";
		return res;
	}
	return "";
}
int main() {
	int n; cin >> n;
	if (n < 0) cout << "negative " << readNumber(-n);
	else cout << readNumber(n); 
	return 0;
}