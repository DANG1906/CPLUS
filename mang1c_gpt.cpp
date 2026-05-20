#include <iostream>
#include <vector>
#include <algorithm> // Để dùng hàm sort
using namespace std;
class MangSoNguyen {
private:
    string tenMang;        // Tên của mảng
    int soPhanTu;          // Số phần tử của mảng
    vector<int> mang;      // Mảng lưu các số nguyên
public:
    // Hàm nhập mảng
    void nhap() {
        cout << "nhap ten mang: ";
        cin >> tenMang;
        cout << "nhap so phan tu cua mang: ";
        cin >> soPhanTu;
        mang.resize(soPhanTu); // Cấp phát kích thước mảng
        cout << "nhap cac phan tu cua mang:\n";
        for (int i = 0; i < soPhanTu; i++) {
            cout << "phan tu " << i + 1 << ": ";
            cin >> mang[i];
        }
    }
    // Hàm xuất mảng
    void xuat() const {
        cout << "ten mang: " << tenMang << "\n";
        cout << "cac phan tu cua mang: ";
        for (int i = 0; i < soPhanTu; i++) {
            cout << mang[i] << " ";
        }
        cout << "\n";
    }
    // Hàm tính tổng các phần tử chẵn
    int tongChan() const {
        int tong = 0;
        for (int i = 0; i < soPhanTu; i++) {
            if (mang[i] % 2 == 0) {
                tong += mang[i];
            }
        }
        return tong;
    }
    // Hàm tìm phần tử có giá trị lớn nhất
    int giaTriLonNhat() const {
        return *max_element(mang.begin(), mang.end());
    }
    // Hàm sắp xếp mảng theo chiều tăng dần
    void sapXepTangDan() {
        sort(mang.begin(), mang.end());
    }
};
int main() {
    MangSoNguyen mang1;    
    mang1.nhap();   
    cout << "----------------------\nmang ban dau\n";
    mang1.xuat();
    // Tính và in tổng các phần tử chẵn
    cout << "tong cac phan tu chan: " << mang1.tongChan() << "\n";
    // Tìm và in phần tử có giá trị lớn nhất
    cout << "phan tu co gia tri lon nhat " << mang1.giaTriLonNhat() << "\n";
    // Sắp xếp và in mảng sau khi sắp xếp
    mang1.sapXepTangDan();
    cout << "----------------------\nmang sau khi tang dan\n";
    mang1.xuat();
    return 0;
}