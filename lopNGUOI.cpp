#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class NGUOI {
protected:
    string hoTen;  
    int namSinh;   

public:
    void nhap() {
        cout << "Nhap ho ten: ";
        cin.ignore(); // Để xử lý newline còn sót lại trong bộ đệm
        getline(cin, hoTen);
        cout << "Nhap nam sinh: ";cin >> namSinh;
    }
    void xuat() const {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
    }
};
class SINHVIEN : public NGUOI {
private:
    string maSV;  
    float dtb;    

public:void nhapSinhVien() {
        nhap();  // Gọi hàm nhap của lớp NGUOI
        cout << "Nhap ma sinh vien: ";
        cin >> maSV;
        cout << "Nhap diem trung binh: ";
        cin >> dtb;
    }
    void xuatSinhVien() const {
        xuat();  // Gọi hàm xuat của lớp NGUOI
        cout << "Ma sinh vien: " << maSV << endl;
        cout << "Diem trung binh: " << dtb << endl;
    }
    float getDtb() const {
        return dtb;
    }
    string getMaSV() const {
        return maSV;
    }
    // Hàm so sánh điểm trung bình (dùng cho sắp xếp)
    bool operator<(const SINHVIEN& other) const {
        return dtb > other.dtb;  // So sánh giảm dần theo điểm trung bình
    }
};
// Hàm nhập danh sách sinh viên
void nhapdssv(vector<SINHVIEN>& dsSV, int n) {
    dsSV.resize(n);
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        dsSV[i].nhapSinhVien();
    }
}
// Hàm in danh sách sinh viên
void indssv(const vector<SINHVIEN>& dsSV) {
    for (const auto& sv : dsSV) {
        sv.xuatSinhVien();
        cout << "--------------------------" << endl;
    }
}
// Hàm tìm và in thông tin sinh viên theo mã sinh viên
void timsv(const vector<SINHVIEN>& dsSV, const string& maSV) {
    for (const auto& sv : dsSV) {
        if (sv.getMaSV() == maSV) {
            sv.xuatSinhVien();
            return;
        }
    }
    cout << "Khong tim thay sinh vien co ma: " << maSV << endl;
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    vector<SINHVIEN> dsSV;
    nhapdssv(dsSV, n); 
    sort(dsSV.begin(), dsSV.end());  
    cout << "\nDanh sach sinh vien theo thu tu giam dan cua diem trung binh:\n";
    indssv(dsSV);
  // Nhập mã sinh viên để tìm kiếm
    string maSV;
    cout << "Nhap ma sinh vien can tim: ";
    cin >> maSV;
    timsv(dsSV, maSV);
    return 0;
}
