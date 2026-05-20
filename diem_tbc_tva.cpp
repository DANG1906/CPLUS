#include<iostream>

using namespace std;
class sinhvien{
	private: 
			string masv,hoten;
			float dtoan,dvan,danh;
	public:
		void nhap();
		void xuat();
		float dtb();
		float thutu();
};
	void sinhvien::nhap(){
		cout<<"\nnhap ma sinh vien: ";cin>>masv;
		cin.ignore();
		cout<<"nhap ho ten: ";getline(cin,hoten);cin.ignore();
		cout<<"nhap diem toan: ";cin>>dtoan;
		cout<<"nhap diem van: ";cin>>dvan;
		cout<<"nhap diem anh: ";cin>>danh;
		}                                 
	void sinhvien::xuat(){
		cout<<"\nma sinh vien: "<<masv<<endl ;
		cout<<"\nho ten: "<<hoten<<endl;
		cout<<"diem toan: "<<dtoan<<endl;
		cout<<"diem van: "<<dvan<<endl;
		cout<<"diem anh: "<<danh<<endl;
	}
	float sinhvien::dtb(){
		float dtb = float(dtoan+dvan+danh)/3;
		cout<<"\ndiem trung binh: "<<dtb<<endl;
	}
int main(){
	int n;
		cout<<"nhap so luong sinh vien : ";cin>>n;
		sinhvien x[20];	
	for(int i=0;i<n;i++){
		cout<<"\nnguoi thu: "<<i+1;
		x[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\nnguoi thu: "<<i+1;
		x[i].xuat();
	}
		for(int i=0;i<n;i++){
			cout<<"nguoi thu: "<<i+1;
			x[i].dtb();
		}
	return 0;
	}                           