#include<bits/stdc++.h>
using namespace std;
void check_inside(int m, int n, int x, int y, int w, int h) {
	int x2 = x + w;
	int y2 = y + h;
	
}

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    
    int maxRight = -1; // Luu m�p ph?i xa nh?t trong c�c h�nh ch? nh?t h?p l?
    int count = 0;     // �?m s? h�nh ch? nh?t c� m�p ph?i xa nh?t

    while (k--) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        
        int x2 = x + w; // T?a d? m�p ph?i c?a h�nh ch? nh?t

        // Ki?m tra h�nh ch? nh?t c� m�p ph?i kh�ng vu?t qu� ho?c ch?m m�p ph?i m�n h�nh
        if (x2 < m) {
            if (x2 > maxRight) {
                maxRight = x2;
                count = 1;  // Kh?i d?ng l?i d?m
            } else if (x2 == maxRight) {
                count++;  // Tang d?m n?u c� th�m h�nh ch? nh?t c� m�p ph?i tuong t?
            }
        }
    }
    
    cout << count << endl;

    return 0;
}

