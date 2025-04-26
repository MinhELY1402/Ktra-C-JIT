// Bài 3: Quản lý sinh viên
#include <iostream>
#include <string>
using namespace std;
struct SinhVien {
    string hoTen;
    int toan;
    int ly;
    int hoa;
};
void nhapThongTin(SinhVien &sv) {
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, sv.hoTen);
    cout << "Nhap diem toan: ";
    cin >> sv.toan;
    cout << "Nhap diem ly: ";
    cin >> sv.ly;
    cout << "Nhap diem hoa: ";
    cin >> sv.hoa;
}
void inThongTin(const SinhVien &sv) {
    cout << "Ho ten: " << sv.hoTen << endl;
    cout << "Diem toan: " << sv.toan << endl;
    cout << "Diem ly: " << sv.ly << endl;
    cout << "Diem hoa: " << sv.hoa << endl;
}
float tinhDiemTrungBinh(const SinhVien &sv) {
    return (sv.toan + sv.ly + sv.hoa) / 3.0;
}
int main() {
    int n;
    cout<< "Nhap so sinh vien: ";
    cin >> n;
    if (n <= 0) {
        cout << "So sinh vien phai lon hon 0." << endl;
        return 1;
    }
    SinhVien *dsSinhVien = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien " << i + 1 << ":" << endl;
        nhapThongTin(dsSinhVien[i]);
    }
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    for (int i = 0; i < n; i++) {
        if(tinhDiemTrungBinh(dsSinhVien[i]) >= 8) {
            cout << "Thong tin sinh vien " << i + 1 << ":" << endl;
            inThongTin(dsSinhVien[i]);
            cout << "Diem trung binh: " << tinhDiemTrungBinh(dsSinhVien[i]) << endl;
        }
    }
}