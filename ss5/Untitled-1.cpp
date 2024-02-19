#include<iostream>
#include<string>

using namespace std;

string hoTen, maSoSinhVien, soDienThoai, email;

void nhapThongTin() {
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap ma so sinh vien: ";
    getline(cin, maSoSinhVien);
    cout << "Nhap so dien thoai: ";
    getline(cin, soDienThoai);
    cout << "Nhap email: ";
    getline(cin, email);
}

void xuatThongTin() {
    cout << "/*********************************************/" << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ma so sinh vien: " << maSoSinhVien << endl;
    cout << "So dien thoai: " << soDienThoai << "\t\tEmail: " << email << endl;
    cout << "/*********************************************/" << endl;
}

int main() {
    nhapThongTin();
    xuatThongTin();
    return 0;
}
