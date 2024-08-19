#include<bits/stdc++.h>
using namespace std;
bool check_inside(int m, int n, int x, int y, int w, int h) {
	int x2 = x + w;
	int y2 = y + h;
	return (x>=0 && y>=0 && x2<=m && y2<=n);
}

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    
    int maxRight = -1; 
    int count = 0;     

    while (k--) {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        
        if (check_inside(m,n,x,y,w,h)) {
        	int x2 = x + w; 

        	// kiem tra vuot qua hoac cham mep phai
        	if (x2 < m) {
            		if (x2 > maxRight) {
                		maxRight = x2;
                		count = 1;  //khoi dong lai bien dem
            		} else if (x2 == maxRight) {
                		count++;  //tang neu co mep phai tuong tu
            		}
        	}
	}
        
    }
    
    cout << count << endl;

    return 0;
}

