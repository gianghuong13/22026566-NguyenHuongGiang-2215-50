#include<bits/stdc++.h>
struct Time {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    int h;
    int m;
	int s; 
    // Hai ham khoi tao
	Time() {
		h = 0;
		m = 0;
		s = 0;
	}
	Time(int _h, int _m, int _s) {
		h = _h;
		m = _m;
		s = _s;
	}
    int second() {
        // your code goes here
        return h * 3600 + m*60 + s;
    }
    
    void print() {
        // your code goes here
        cout << setw(2) << setfill('0') << h << ":"
            << setw(2) << setfill('0') << m << ":"
            << setw(2) << setfill('0') << s << endl;
    }
};

Time normalize(int h, int m, int s) {
    // your code goes here
    if (s >= 60) {
    	m += s/60;
    	s = s%60;
	}
	if (m >= 60) {
		h += m/60;
		m = m % 60;
	}
	return Time(h,m,s);
}