#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}
class Fraction {
    int a, b;
public:
    Fraction(int a = 1, int b = 1) {
        this->a = a;
        this->b = b;
    }
    friend ostream& operator<<(ostream& os, const Fraction& f) {
        if (f.b!=0) {
            os << f.a << "/" << f.b;
        } else {
            os << "invalid";
        }
        return os;
    }
    Fraction operator+(const Fraction& f) const {
        Fraction x;
        x.a = a * f.b + b * f.a;
        x.b = b * f.b;
        x.simplify();
        return x;
    }
    Fraction operator-(const Fraction& f) const {
        Fraction x;
        x.a = a * f.b - b * f.a;
        x.b = b * f.b;
        x.simplify();
        return x;
    }
    Fraction operator*(const Fraction& f) const {
        Fraction x;
        x.a = a * f.a;
        x.b = b * f.b;
        x.simplify();
        return x;
    }
    Fraction operator/(const Fraction& f) const {
        Fraction x;
        x.a = a * f.b;
        x.b = b * f.a;
        x.simplify();
        return x;
    }
    void simplify() {
        int ucln = gcd(a,b);
        a /= ucln;
        b /= ucln;
    }
    bool operator>(const Fraction& f) const {
        if (a*f.b > b*f.a) return true;
        return false;
    }
    bool operator<(const Fraction& f) const {
        if (a*f.b < b*f.a) return true;
        return false;
    }
};

int main() {
	Fraction x(2,7), y(3,5);
	
	 
	cout << x + y;
	return 0;
}
