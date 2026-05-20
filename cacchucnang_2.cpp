#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std; 

class SinhVien {
private:
    string ten;
    float gpa;

public:
    SinhVien(string t = "", float g = 0.0) : ten(t), gpa(g) {}  //ham tao
    string getTen() const {
        return ten;
    }
    float getGPA() const {
        return gpa;
    }
    void xuat() const {
        cout << "Ten: " << ten << ", GPA: " << gpa << endl;
    }
    // Hàm so sánh để sắp xếp
    bool operator<(const SinhVien& other) const {
        return gpa > other.gpa; // Sắp xếp từ cao xuống thấp
    }
};
void nhaptt(SinhVien& sv) {
    string ten;
    float gpa;
    cout << "Nhap ten sinh vien: ";
    cin.ignore(); // Để bỏ qua ký tự newline còn lại
    getline(cin, ten);
    cout << "Nhap GPA: ";
    cin >> gpa;
    sv = SinhVien(ten, gpa);
}
// Hàm tìm kiếm sinh viên theo tên
void timsv(const vector<SinhVien>& ds, const string& ten) {
    for (const auto& sv : ds) {
        if (sv.getTen() == ten) {
            cout << "Sinh vien tim thay: ";
            sv.xuat();
            return;
        }
    }
    cout << "Khong tim thay sinh vien co ten: " << ten << endl;
}
// Hàm in ra sinh viên có GPA cao nhất
void ingpacaonhat(const vector<SinhVien>& ds) {
    if (ds.empty()) {
        cout << "Danh sach sinh vien rong." << endl;
        return;
    }
    // Giả sử sinh viên đầu tiên có GPA cao nhất
    SinhVien gpacaonhat = ds[0];
    for (const auto& sv : ds) {
        if (sv.getGPA() >gpacaonhat.getGPA()) {
           gpacaonhat = sv; // Cập nhật sinh viên có GPA cao nhất
        }
    }

    cout << "Sinh vien co GPA cao nhat: ";
    gpacaonhat.xuat();
}
int main() {
    vector<SinhVien> danhSach;
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    // Nhập thông tin sinh viên
    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        cout << "Nhap thong tin cho sinh vien " << (i + 1) << ":" << endl;
        nhaptt(sv);
        danhSach.push_back(sv);
    }
    // Sắp xếp sinh viên theo GPA
    sort(danhSach.begin(), danhSach.end());
    // Xuất danh sách sinh viên
    cout << "\nDanh sach sinh vien sau khi sap xep:\n";
    for (const auto& sv : danhSach) {
        sv.xuat();       
    }
		ingpacaonhat(danhSach);		// In ra sinh viên có GPA cao nhất
   		 
    // Tìm kiếm sinh viên
    string tentk;
    cout << "\nNhap ten sinh vien can tim: ";
    cin.ignore(); // Để bỏ qua ký tự newline còn lại
    getline(cin, tentk);
    timsv(danhSach, tentk);
    return 0;
}