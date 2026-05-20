#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Sinhvien{
	protected:
	string hoten;
	double tuoi;
	double diem;	
	public: 
	//hàm tạo có đối 
	Sinhvien(){
		hoten = " ";
		tuoi = 0;
		diem = 0;
	}
	 Sinhvien(string hoten, double tuoi, double diem) {
        this->hoten = hoten;
        this->tuoi = tuoi;
        this->diem = diem;
    }
    void xuatsv() {
        cout << "Ho ten: " << hoten << ", tuoi: " << tuoi << ", diem: " <<diem << endl;
    }
    void nhapsv(){
	cout<<"nhap ho ten sinh vien: ";cin.ignore();getline(cin,hoten);
	cout<<"nhap tuoi: ";cin>>tuoi;
	cout<<"nhap lop: ";cin>>diem;
	Sinhvien(hoten,tuoi,diem);
}
};
class luong: public Sinhvien{
	public: 
	double pc, hsl;
	public:
		void nhluong(){
			nhapsv();
			cout<<"nhap phu cap :";cin>>pc;
			cout<<"nhap he so luong: ";cin>>hsl;
		}
		void xluong(){
			xuatsv();
			cout<<"phu cap: "<<pc<<endl;
			cout<<"he so luong: "<<hsl<<endl;
			cout<<"luong co ban = "<<luongcb()<<endl;	
			}		
		double luongcb(){
			return (hsl * 20000 + pc);	
		}
		void sx(luong l[30],int n){
		int i,j;
		for(i = 0 ; i < n-1 ; i++){
			for( j = i+1 ; j < n ; j++){
			if(l[i].luongcb() < l[j].luongcb()){
				luong tg;
				tg = l[i];
				l[i] = l[j];
				l[j] = tg;
			}
		}
	}
			for(int i = 0 ; i < n ; i++){
				l[i].luongcb();
	
			}
		}
			
};
main(){
	int i,n,tg;
	luong l[30];
	cout<<"nhap so luong sinh vien: ";cin>>n;
	for(i=0 ; i<n ;i++){
		cout<<"\nnhap thong tin sinh vien "<<i+1<<":"<<endl;
		l[i].nhluong();
	}
	
	cout<<"\ndanh sach luong cua sv :\n";
	for (i=0 ; i<n ; i++){
		l[i].xluong();
		l[i].luongcb();
		cout<<"\n";
	}
	
	cout<<"===========================\ndanh sach sinh vien co tien luong >200.000\n";
	for(i=0; i<n ;i++){
		if(l[i].luongcb()>200000){
		l[i].xluong();
		l[i].luongcb();			
	}
	}
	for(i = 0 ;i<n ;i++){
		cout<<"danh sach :";
		sx(l,n);
}

}