#include<bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string name;
    int age;
    double gpa;

    SinhVien(string n, int a, double g) : name(n), age(a), gpa(g) {}
};

// Hàm cmp d? s?p x?p sinh viên theo tên tang d?n (A-Z)
bool cmp(SinhVien a, SinhVien b) {
    return a.gpa < b.gpa;
}

int main() {
    vector<SinhVien> ds;
    
    // Thêm d? li?u sinh viên vào danh sách
    ds.push_back(SinhVien("Nguyen Van A", 20, 3.5));
    ds.push_back(SinhVien("Tran Thi B", 21, 3.8));
    ds.push_back(SinhVien("Le Van C", 22, 2.9));
    ds.push_back(SinhVien("Pham Thi D", 19, 3.7));
    
    // S?p x?p danh sách sinh viên theo tên
    sort(ds.begin(), ds.end(), cmp);
    
    // In ra danh sách sau khi s?p x?p
    for (auto sv : ds) {
        cout << "Name: " << sv.name << ", Age: " << sv.age << ", GPA: " << sv.gpa << endl;
    }

    return 0;
}

