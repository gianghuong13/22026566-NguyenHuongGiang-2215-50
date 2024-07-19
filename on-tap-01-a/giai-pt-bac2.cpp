#include<bits/stdc++.h>
using namespace std;
int main() {
	float a, b, c; cin >> a >> b >> c;
	float delta = (b*b - 4*a*c);
	if (delta == 0) {
		cout << fixed << setprecision(2) << -1.0*b/(2*a);
	} else if (delta > 0) {
		float x1 = (-b - sqrt(delta))/(2*a);
		float x2 = (-b + sqrt(delta))/(2*a);
		cout << fixed << setprecision(2) << x1 << endl << fixed 
			<< setprecision(2) << x2;
	} else {
		float thuc = -1.0*b/(2*a);
		float ao1 = -1.0*sqrt(-delta)/(2*a);
		float ao2 = 1.0*sqrt(-delta)/(2*a);
		cout << fixed << setprecision(2) << thuc << " " << fixed 
			<< setprecision(2) << ao1;
		cout << endl << fixed << setprecision(2) << thuc << " " << fixed 
			<< setprecision(2) << ao2;
	}
	return 0;
}