#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;

class product
{
protected:
    string ten, dvt;
    int gia;
public:
    virtual void hienthi() const = 0;
};

class electronic : public product
{
private:
    int nambh;
public:
    void nhap()
    {
        cin.ignore();
        cout << "\n nhap ten sp = ";
        getline(cin, ten);
        cout << "\n nhap gia = ";
        cin >> gia;
        cin.ignore(); // thêm d?ng này ð? tránh l?i khi nh?p chu?i sau khi nh?p s?
        cout << "\n nhap don vi tinh = ";
        getline(cin, dvt);
        cout << "\n nhap nam bh = ";
        cin >> nambh;
    }
    void hienthi() const override
    {
        cout << "ten \t" << "gia \t" << "DVT \t" << "Nam BH" << endl;
        cout << ten << "\t" << gia << "\t" << dvt << "\t" << nambh << endl;
    }
};
class clothing : public product
{
private:
    string sz, ms, chat;
public:
    void nhap()
    {
        cin.ignore();
        cout << "\n nhap ten sp = ";
        getline(cin, ten);
        cout << "\n nhap gia = ";
        cin >> gia;
        cin.ignore(); // thêm d?ng này ð? tránh l?i khi nh?p chu?i sau khi nh?p s?
        cout << "\n nhap don vi tinh = ";
        getline(cin, dvt);
        cout << "\n nhap size = ";
        getline(cin, sz);
        cout << "\n nhap mau sac = ";
        getline(cin, ms);
    }
    void hienthi() const override
    {
        cout << "ten \t" << "gia \t" << "DVT \t" << "Size \t" << "Mau Sac" << endl;
        cout << ten << "\t" << gia << "\t" << dvt << "\t" << sz << "\t" << ms << endl;
    }
};
int main()
{
    electronic p[5];
    clothing c[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Nhap thong tin san pham dien tu " << i + 1 << endl;
        p[i].nhap();
        cout << "Nhap thong tin quan ao " << i + 1 << endl;
        c[i].nhap();
    }
    cout << "Thong tin san pham dien tu:" << endl;
    for (i = 0; i < 5; i++)
    {
        p[i].hienthi();
    }
    cout << "Thong tin quan ao:" << endl;
    for (i = 0; i < 5; i++)
    {
        c[i].hienthi();
    }
    getch();
    return 0;
}