#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Lớp CanBo (Cán bộ)
class CanBo {
protected:
    string maCB;    // Mã cán bộ
    string hoTen;   // Họ tên cán bộ
public:
    // Hàm nhập thông tin cán bộ
    void nhap() {
        cout << "Nhap ma can bo: ";
        cin >> maCB;
        cin.ignore(); // Để xử lý newline còn sót lại trong bộ đệm
        cout << "Nhap ho ten can bo: ";
        getline(cin, hoTen);
    }
    // Hàm hiển thị thông tin cán bộ
    void hienThi() const {
        cout << "Ma can bo: " << maCB << endl;
        cout << "Ho ten can bo: " << hoTen << endl;
    }
    // Hàm lấy mã cán bộ
    string getMaCB() const {
        return maCB;
    }
};
// Lớp Luong kế thừa lớp CanBo
class Luong : public CanBo {
private:
    float phuCap;    // Phụ cấp
    float heSoLuong; // Hệ số lương
    float baoHiem;   // Bảo hiểm
public:
    // Hàm nhập thông tin lương
    void nhapLuong() {
        nhap();  // Gọi hàm nhập của lớp CanBo
        cout << "Nhap phu cap: ";
        cin >> phuCap;
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
        cout << "Nhap bao hiem: ";
        cin >> baoHiem;
    }
    // Hàm tính lương
    float tinhLuong() const {
        return heSoLuong * 390000 + phuCap - baoHiem;
    }
    // Hàm hiển thị thông tin lương
    void hienThiLuong() const {
        hienThi();  // Gọi hàm hienThi của lớp CanBo
        cout << "Phu cap: " << phuCap << endl;
        cout << "He so luong: " << heSoLuong << endl;
        cout << "Bao hiem: " << baoHiem << endl;
        cout << "Luong: " << tinhLuong() << endl;
    }
    // Hàm kiểm tra lương > 2.000.000
    bool luongLonHon2Trieu() const {
        return tinhLuong() > 2000000;
    }
};
// Hàm nhập danh sách lương cán bộ
void nhapDanhSachLuong(vector<Luong>& dsLuong) {
    int n;
    cout << "Nhap so luong can bo: ";
    cin >> n;
    dsLuong.resize(n);
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin can bo thu " << i + 1 << ":" << endl;
        dsLuong[i].nhapLuong();
    }
}
// Hàm in danh sách cán bộ có lương > 2.000.000
void inDanhSachLuongLonHon2Trieu(const vector<Luong>& dsLuong) {
    cout << "Danh sach can bo co luong > 2.000.000:" << endl;
    for (const auto& luong : dsLuong) {
        if (luong.luongLonHon2Trieu()) {
            luong.hienThiLuong();
            cout << "--------------------------" << endl;
        }
    }
}
// Hàm tìm và in thông tin cán bộ theo mã cán bộ
void timThongTinTheoMaCB(const vector<Luong>& dsLuong, const string& maCB) {
    for (const auto& luong : dsLuong) {
        if (luong.getMaCB() == maCB) {
            luong.hienThiLuong();
            return;
        }
    }
    cout << "Khong tim thay can bo co ma: " << maCB << endl;
}

int main() {
    vector<Luong> dsLuong;
    nhapDanhSachLuong(dsLuong);
    inDanhSachLuongLonHon2Trieu(dsLuong);
    // Nhập mã cán bộ cần tìm và in thông tin
    string maCB;
    cout << "Nhap ma can bo can tim: ";
    cin >> maCB;
    timThongTinTheoMaCB(dsLuong, maCB);

    return 0;
}
