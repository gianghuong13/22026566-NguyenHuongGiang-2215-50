#include <bits/stdc++.h> 
using namespace std; 
  
void generateBinaryStrings(int n, int m, string s, int i, int j) 
{ 
    if (i == n && j == m) { 
        cout << s << endl; 
        return; 
    } 
	if (i < n) {
 		generateBinaryStrings(n, m, s + '0', i + 1, j);
	}
  	if (j < m) {
  		generateBinaryStrings(n, m, s + '1', i, j + 1); 
	} 
} 
  
int main() 
{ 
    int n, m; 
    cin >> n >> m;
    string s = ""; 
  
    generateBinaryStrings(n, m, s, 0, 0); 
  
    return 0; 
} 