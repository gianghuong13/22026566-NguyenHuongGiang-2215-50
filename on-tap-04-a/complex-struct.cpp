struct Complex {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    int a; int b;
    // Hai ham khoi tao
    Complex() {
        a=0; b=0;
    }
    Complex(int _a, int _b) {
        a = _a;
        b = _b;
    }
    double abs() {
        // your code goes here
        return sqrt(1.0*a*a+1.0*b*b);
    }
    
    void print() {
        // your code goes here
        if (a==0&&b==0) cout << 0 << endl;
        else if (a==0) cout << b << "i" << endl;
        else if (b==0) cout << a<< endl;
        else if (b==1) cout << a << "+i"<< endl;
        else if (b==-1) cout << a << "-i"<< endl;
        else if (b > 0) cout << a << "+" << b << "i"<< endl;
        else cout << a << b << "i"<< endl;
    }
};

Complex add(Complex a, Complex b) {
    // your code goes here
    return Complex(a.a + b.a , a.b + b.b);
}