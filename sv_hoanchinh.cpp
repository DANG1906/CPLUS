#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Nguoi {
protected:
    string ten;
public:
    Nguoi() : ten("") {}
    Nguoi(string tenNguoi) : ten(tenNguoi) {}
    void nhapThongTin() {
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, ten);
    }
    void xuatThongTin() {
        cout << "Ten: " << ten;
    }
    string getTen() {
        return ten;
    }
};
class SinhVien : public Nguoi {
private:
    string maSV;
    float gpa;
public:
    SinhVien() : Nguoi(), maSV(""), gpa(0.0) {}
    SinhVien(string tenNguoi, string ma, float diem) : Nguoi(tenNguoi), maSV(ma), gpa(diem) {}
    void nhapThongTin() {
        cout << "Nhap ma SV: ";
        cin >> maSV;
        Nguoi::nhapThongTin();
        cout << "Nhap GPA: ";
        cin >> gpa;
    }
    void xuatThongTin() {
        cout << "Ma SV: " << maSV << ", ";
        Nguoi::xuatThongTin();
        cout << ", GPA: " << gpa << endl;
    }
    string getMa() {
        return maSV;
    }
    float getGPA() {
        return gpa;
    }
};

void sapXep(SinhVien arr[], bool tangDan) {
	int n;
    sort(arr, arr + n, [tangDan](SinhVien &a, SinhVien &b) {
        return tangDan ? a.getGPA() < b.getGPA() : a.getGPA() > b.getGPA();
    });
}

void timKiem(SinhVien arr[], int n, string &tuKhoa) {
    bool timThay = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i].getMa() == tuKhoa || arr[i].getTen() == tuKhoa) {
            arr[i].xuatThongTin();
            timThay = true;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay sinh vien voi tu khoa: " << tuKhoa << endl;
    }
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien danhSach[n];
    // Nhap danh sach sinh vien
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        danhSach[i].nhapThongTin();
    }
    // Sap xep va in danh sach theo GPA tang dan
    cout << "\nDanh sach sap xep theo GPA tang dan:\n";
    sapXep(danhSach, n, true);
    for (int i = 0; i < n; ++i) {
        danhSach[i].xuatThongTin();
    }
    // Sap xep va in danh sach theo GPA giam dan
    cout << "\nDanh sach sap xep theo GPA giam dan:\n";
    sapXep(danhSach, n, false);
    for (int i = 0; i < n; ++i) {
        danhSach[i].xuatThongTin();
    }
    // In sinh vien co GPA cao nhat   
    int max, tg;
    max = danhsach[0];
    for(i=1;i<n;i++)
    if(danhSach[i] > max)
    max = danhSach[i];
    cout<<"\n gpa cao nhat: "<<max;
    
    // Tim kiem sinh vien theo tu khoa
    string tuKhoa;
    cout << "\nNhap ma SV hoac ten de tim kiem: ";
    cin.ignore();
    getline(cin, tuKhoa);
    timKiem(danhSach, n, tuKhoa);
    return 0;
}
