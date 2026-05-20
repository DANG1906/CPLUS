#include <iostream>
#include <string>
#include<iomanip>
#include<string.h>
#include <conio.h>
using namespace std;

class sinhvien
{
	public:
		string hoten;
		int namsinh;
		float m1,m2,m3,dtb;
	public: 
		void nhap();
		void xuat();
		void sv_khoaluan(sinhvien sv);
		void sv_totnghiep(sinhvien sv);
		void sv_thilai(sinhvien sv);
};

void sinhvien::nhap(){

	cin.ignore();
	cout<<"\nnhap ho ten: ";getline(cin,hoten);
	cin.ignore();
	cout<<"\n nhap nam sinh: ";cin>>namsinh;
	cout<<"\n nhap diem mon 1: ";cin>>m1;
	cout<<"\n nhap diem mon 2: ";cin>>m2;
	cout<<"\n nhap diem mon 3: ";cin>>m3;
	dtb = (m1+m2+m3)/3;
	}
void tieude(){
	cout<<"ho ten "<<"\t nam sinh"<<setw(5)<<"diem mon 1"<<"diem mon 2"<<"diem mon 3";
	cout<<endl;
	}

void sinhvien::xuat(){
	cout<<hoten<<namsinh<<setw(5)<<m1<<m2<<m3;
}
void sinhvien::sv_khoaluan(sinhvien sv){
	if((sv.dtb>=7)&&(sv.m1>5)&&(sv.m2>5)&&(sv.m3>5))
	sv.xuat();
}
void sinhvien::sv_totnghiep(sinhvien sv)
{
	if ((sv.dtb<7)&&(sv.m1>=5)&&(sv.m2>=5)&&(sv.m3>=5))
	sv.xuat();
}
void sinhvien::sv_thilai(sinhvien sv)
{
	if((sv.m1<5)||(sv.m2<5)||(sv.m3<5))
	sv.xuat();
}
main(){
	sinhvien sv[10];
	int i,n;
	cout<<"\n nhap so sinh vien n= ";cin>>n;
	for(i=0 ; i<n ; i++){
		cout<<"\n sinh vien thu: "<<i;
		sv[i].nhap();
		cin.ignore();
	}
	cout<<"\n danh sach sinh vien gom: \n";
	for(i=0 ; i<n ; i++){
		sv[i].xuat();
		cout<<"\n";
	}
	cout<<"\n danh sach sinh vien lam khoa luan: \n";
	for(int i= 0 ; i<n; i++)
	sv[i].sv_khoaluan(sv[i]);
	cout<<"\n danh sach sinh vien tot nghiep: \n";
	for(int i= 0; i<n ; i++)
	sv[i].sv_totnghiep(sv[i]);
	cout<<"\n danh sach sinh vien thi lai: \n";
	for(int i= 0 ;i<n; i++)
	sv[i].sv_thilai(sv[i]);
	getch();
}
	

