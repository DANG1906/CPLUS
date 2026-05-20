#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Sinhvien{

private:
		 Sinhvien(){}
    string hoten;
    int tuoi;
    string lop;
    float gpa;
public:
    // Hàm khởi tạo
    Sinhvien(string ht, int t, string l, float g) {
        hoten = ht;
        tuoi = t;
        lop = l;
        gpa = g;
    }
};

// Hàm so sánh để sắp xếp sinh viên theo GPA
bool compareGPA(const Sinhvien &sv1, const Sinhvien &sv2) {
    return sv1.gpa > sv2.gpa; // Sắp xếp từ cao xuống thấp
}

// Hàm tìm kiếm sinh viên theo họ tên
void timsv(const vector<Sinhvien> &danhSach, const string &tencantim) {
    bool found = false;
    for (const auto &sv : danhSach) {
        if (sv.hoten == tencantim) {
            cout << "Thong tin sinh vien:\n";
            cout << "Ho ten: " << sv.hoten << ", Tuoi: " << sv.tuoi 
                 << ", Lop: " << sv.lop << ", GPA: " << sv.gpa << endl;
            found = true;
            break; // Dừng lại khi tìm thấy sinh viên đầu tiên
        }
    }
    if (!found) {
        cout << "Khong tim thay sinh vien co ho ten: " << tencantim << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore(); // Để bỏ qua ký tự newline còn lại trong buffer

    vector<Sinhvien> dssinhvien;

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; ++i) {
        string hoten;
        int tuoi;
        string lop;
        float gpa;

        cout << "\nNhap thong tin cho sinh vien " << (i + 1) << ":\n";
        cout << "Ho ten: ";
        getline(cin, hoten);
        cout << "Tuoi: ";
        cin >> tuoi;
        cin.ignore(); // Để bỏ qua ký tự newline còn lại trong buffer
        cout << "Lop: ";
        getline(cin, lop);
        cout << "GPA: ";
        cin >> gpa;
        cin.ignore(); // Để bỏ qua ký tự newline còn lại trong buffer

        // Tạo đối tượng SinhVien và thêm vào danh sách
        dssinhvien.emplace_back(hoten, tuoi, lop, gpa);
    }

    // Sắp xếp danh sách sinh viên theo GPA
    sort(dssinhvien.begin(), dssinhvien.end(), compareGPA);

    // In ra thông tin sinh viên
    cout << "\nDanh sach sinh vien sau khi sap xep theo GPA:\n";
    for (const auto &sv : dssinhvien) {
        cout << "Ho ten: " << sv.hoten << ", Tuoi: " << sv.tuoi 
             << ", Lop: " << sv.lop << ", GPA: " << sv.gpa << endl;
    }
    // Tìm kiếm sinh viên
    string tencantim;
    cout << "\nNhap ho ten sinh vien can tim: ";
    getline(cin, tencantim);
    timsv(dssinhvien, tencantim);
    return 0;
}