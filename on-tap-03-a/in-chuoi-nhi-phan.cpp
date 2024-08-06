#include <bits/stdc++.h> 
using namespace std; 
  
void generateBinaryStrings(int n, string s, int i) 
{ 
    if (i == n) { 
        cout << s <<endl; 
        return; 
    } 
 
    generateBinaryStrings(n, s + '0', i + 1); 
  
    generateBinaryStrings(n, s + '1', i + 1); 
} 
  
int main() 
{ 
    int n; 
    cin >> n;
    string s = ""; 
  
    generateBinaryStrings(n, s, 0); 
  
    return 0; 
} 