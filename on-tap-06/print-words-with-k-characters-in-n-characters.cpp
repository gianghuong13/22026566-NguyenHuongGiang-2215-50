#include<bits/stdc++.h>
using namespace std;

int n, k;
char str[100];
bool used[27] = {false};
void print() {
    for (int i = 1; i <= k; i++) {
        cout << str[i];
    }
    cout << endl;
}
void Try(int i) {
    for (char c = 'a'; c <= 'a'+n-1; c++) {
    	if(c != str[i-1] && used[c-'a']==false)
    	{
    		str[i] = c;
    		used[c-'a']= true;
        	if (i == k) {
            	print();
        	}
        	else {
        		Try(i+1);
			}
			used[c-'a'] = false;
		}
    }
}

int main() {
    cin >> n >> k;
	str[0] = 'a'-1;
    Try(1);
	
    return 0;
}
