#include <iostream>
#include <string>

using namespace std;

class SinhVien {
private:
    string ten;
    int tuoi;
    string maSV;
    double gpa;
public:
    // Hàm tạo
    SinhVien() : ten(""), tuoi(0), maSV("") ,gpa(0.0){} // Hàm khởi tạo mặc định
    SinhVien(string t, int tu, string ma,string diem) {
        this->ten = t;
        this->tuoi = tu;
        this->maSV = ma;
        this->gpa = diem;
    }
    // Hàm xuất thông tin sinh viên
    void xuatTT() const {
        cout << "Ma SV: " << maSV << endl;
        cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "gpa: " << gpa <<endl;
    }
    // Hàm nhập thông tin sinh viên
    void nhapTT() {
        cout << "Ma SV: ";
        cin >> maSV;
        cout << "Ten: ";
        cin.ignore(); // Để bỏ qua ký tự newline còn lại trong buffer
        getline(cin, ten);
        cout << "Tuoi: ";
        cin >> tuoi;
        cout<<"gpa: ";
        cin>>gpa;
    }
};
bool comperate(SinhVien &sv1 , SinhVien&sv2){
	return sv1.
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien* sinhViens = new SinhVien[n];// Tạo mảng sinh viên
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien " << (i + 1) << ":" << endl;
        sinhViens[i].nhapTT();
    }
    cout << "\nThong tin sinh vien:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << (i + 1) << ":" << endl;
        sinhViens[i].xuatTT();
    }
    delete[] sinhViens;

    return 0;
}