#include <iostream>
#include <cmath>
using namespace std;

class sophuc {
private:
    int thuc, ao;

public:
    // Hàm tạo không tham số
    sophuc() {
        thuc = 0;
        ao = 0;
    }

    // Hàm tạo có tham số
    sophuc(int a, int b) {
        thuc = a;
        ao = b;
    }

    // Hàm nhập số phức
    void nhap() {
        cout << "nhap phan thuc = ";
        cin >> thuc;
        cout << "nhap phan ao = ";
        cin >> ao;
    }

    // Hàm xuất số phức
    void xuat() {
        if (ao >= 0)
            cout << thuc << "+" << ao << "*i" << endl;
        else
            cout << thuc << ao << "*i" << endl;
    }

    // Hàm tính tổng hai số phức
    sophuc tong(sophuc p2) {
        sophuc t;
        t.thuc = thuc + p2.thuc;
        t.ao = ao + p2.ao;
        return t;
    }

    // Hàm tính hiệu hai số phức
    sophuc hieu(sophuc p2) {
        sophuc t;
        t.thuc = thuc - p2.thuc;
        t.ao = ao - p2.ao;
        return t;
    }

    // Hàm tính tích hai số phức
    sophuc tich(sophuc p2) {
        sophuc tich;
        tich.thuc = thuc * p2.thuc - ao * p2.ao;
        tich.ao = thuc * p2.ao + ao * p2.thuc;
        return tich;
    }

    // Hàm tính mô-đun của số phức
    float modun() {
        return sqrt(thuc * thuc + ao * ao);
    }
};

int main() {
    sophuc p[10];
    int n;
    cout << "\nNhap so luong SP = ";
    cin >> n;

    // Nhập dãy số phức
    for (int i = 0; i < n; i++) {
        p[i].nhap();
    }

    cout << "Danh sach so phuc gom:\n";
    for (int i = 0; i < n; i++) {
        p[i].xuat();
    }

    return 0;
}
