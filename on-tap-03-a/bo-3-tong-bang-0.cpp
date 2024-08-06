#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findZeroSumTriplet(vector<int> a) {
    vector<vector<int>> res;
    
    sort(a.begin(), a.end());
    for (int i = 0; i < (int)a.size(); i++) {
        int target = -a[i];
    
        int front = i + 1;
        int back = a.size()-1;
        
        while (front < back) {
            int tmp = a[front] + a[back];
            if (tmp < target) {
                front++;
            } else if (tmp > target) {
                back--;
            } else {
                vector<int> triplet = {a[i], a[front], a[back]};
                res.push_back(triplet);
                while (front < back && a[front]==triplet[1]) {
                    front++;
                }
                while (front < back && a[back]==triplet[2]) {
                    back--;
                }
            }
        }
        while (a[i]==a[i+1] && i+1 < (int)a.size()) {
            i++;
        }
    }
    return res;
}
int main() {
	int n; cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
	    int tmp; cin >> tmp;
	    a.push_back(tmp);
	}
	vector<vector<int>> res = findZeroSumTriplet(a);
	
	for (auto triplet : res) {
	    for (auto x : triplet) {
	        cout << x << " ";
	    }
	    cout << endl;
	}
	return 0;
}