#include<bits/stdc++.h>
using namespace std;
// Toán tử in ra màn hình
ostream& operator<<(ostream& os, const BigInt& num)
{
    os << num.value;
    return os;
}

// Hàm khởi tạo
BigInt::BigInt() 
{
    value = "0";
}

BigInt::BigInt(const char *num)
{
    value = num;
}

BigInt::BigInt(const BigInt& num)
{
    value = num.value;
}

// Toán tử cộng
BigInt operator+(const BigInt& num, const BigInt& other)
{
    string first_num = num.value;
    string second_num = other.value;
    
    while (first_num.size() < second_num.size()) {
        first_num = "0" + first_num;
    }
    while (second_num.size() < first_num.size()) {
        second_num = "0" + second_num;
    }
    
    string res = "";
    int carry = 0;
    int n = first_num.size();
    for (int i = n-1; i >= 0; i--) {
        int a = first_num[i] - '0';
        int b = second_num[i] - '0';
        int sum = a + b + carry;
        carry = sum/10;
        res = to_string(sum%10) + res;
    }
    if (carry > 0) {
        res = to_string(carry) + res;
    }
    return BigInt(res.c_str()); // Sua dong nay
}
