#include<bits/stdc++.h>
using namespace std;
void check_inside(int m, int n, int x, int y, int w, int h) {
	int x2 = x + w;
	int y2 = y + h;
	
}

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    
    int maxRight = -1; // Luu mép ph?i xa nh?t trong các hình ch? nh?t h?p l?
    int count = 0;     // Ð?m s? hình ch? nh?t có mép ph?i xa nh?t

    while (k--) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        
        int x2 = x + w; // T?a d? mép ph?i c?a hình ch? nh?t

        // Ki?m tra hình ch? nh?t có mép ph?i không vu?t quá ho?c ch?m mép ph?i màn hình
        if (x2 < m) {
            if (x2 > maxRight) {
                maxRight = x2;
                count = 1;  // Kh?i d?ng l?i d?m
            } else if (x2 == maxRight) {
                count++;  // Tang d?m n?u có thêm hình ch? nh?t có mép ph?i tuong t?
            }
        }
    }
    
    cout << count << endl;

    return 0;
}

