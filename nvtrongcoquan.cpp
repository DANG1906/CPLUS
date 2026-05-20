#include<iostream>
#include<conio.h>

using namespace std;
//chua xong
class nguoi{
	protected: 
	string hoten;
	float maso, luong;
	public:
		void nhap_nguoi()
		{
			cin.ignore();
			cout<<"\nnhap ho ten ";getline(cin,hoten);
			
			cout<<"\nnhap ma so: ";cin>>maso;
			
			cout<<"\nnhap luong: ";cin>>luong;
		
		}
		void xuat_nguoi(){
			cout<<"\nho ten: "<<hoten<<endl;
			cout<<"\nma so : "<<maso<<endl;
			cout<<"\nluong: "<<luong<<endl;
		}
};
class BIENCHE:public nguoi{
	public:
		int phucap;
		float hsl;
		public:
		void nhapbc()
		{
			nhap_nguoi();
			cout<<"\nnhap he so luong: ";cin>>hsl;
			cout<<"\nnhap phu cap chuc vu: ";cin>>phucap;
		}
		void xuatbc(){
			xuat_nguoi();
			cout<<"\nhe so luong: "<<hsl<<endl;
			cout<<"\nphu cap chuc vu: "<<phucap<<endl;
		}	
};
class HOPDONG:public nguoi{
	public:
		int tiencong,ngaylv;
		float hsvg;
	public : 
	void nhaphd(){
		nhap_nguoi();
		cout<<"\nnhap tien cong: ";cin>>tiencong;
		cout<<"\nnhap so ngay lam viec:";cin>>ngaylv;
		cout<<"\nnhap he so vuot gio: ";cin>>hsvg;
	}
	void xuathd(){
		xuat_nguoi();
		cout<<"\ntien cong= "<<tiencong<<endl;
		cout<<"\nhe so vuot gio= "<<hsvg<<endl;
	}
};
	main(){
	BIENCHE a[20];
	HOPDONG b[20];
	int n,m;
	cout<<"\nnhap so luong nguoi bien che: ";cin>>n;
	for(int i=0; i<n;i++){
		cout<<"\n nguoi thu: "<<i+1<<endl;
		a[i].nhapbc();
		}
	cout<<"\n nhap so luong nguoi hop dong: ";cin>>m;
	for(int i=0;i<n;i++){
	cout<<"\n nguoi thu: "<<i+1<<endl;
	    b[i].nhaphd();
	}
	cout<<"\n danh sach bien che:";
	for (int i=0;i<n;i++){
		cout<<"\n nguoi thu"<<i+1<<endl;
		a[i].xuatbc();
	}
	cout<<"\ndanh sach hop dong:";
	for(int i=0;i<n;i++){
		cout<<"\n nguoi thu "<<i+1<<endl;
		b[i].xuathd();
	}
	getch();
	
}
