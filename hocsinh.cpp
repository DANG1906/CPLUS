#include<iostream>

using namespace std;
class sinhvien{
	private: 
	string hoten;
	int tuoi;
	float diem;
	public : sinhvien():hoten(""), tuoi(0), diem(0.0){}
	
			 sinhvien(string hoten, int tuoi, float diem) {
			 this->hoten = hoten;
			 this->tuoi = tuoi;
			 this->diem = diem;
			 }
			 void nhapsv(){
			 	cout<<"nhap ten: "; cin.ignore(); getline(cin , hoten);
			 	cout<<"nhap tuoi: ";cin>>tuoi;
			 	cout<<"nhap diem: ";cin>>diem;
			 }
			 void xuatsv(){
			 	cout<<"ten : "<<hoten<<endl;
			 	cout<<"tuoi: "<<tuoi<<endl;
			 	cout<<"diem: "<<diem<<endl;
			 }
};
class hocsinh: public sinhvien{
	public: double namhoc;
			double hocphi;
			string lop;
			void nhaphs(){
				nhapsv();
				cout<<"nhap lop: ";cin>>lop;
				cout<<"nhap hoc phi: ";cin>>hocphi;
				cout<<"nhap so nam hoc: ";cin>>namhoc;
			}
			double tienhp(){
	return namhoc*hocphi;}
			void xuaths(){
				xuatsv();
				cout<<"lop: "<<lop<<endl;
				cout<<"hoc phi : "<<hocphi<<endl;
				cout<<"so nam hoc: "<<namhoc<<endl;
				cout<<"hoc phi phai dong: "<<tienhp()<<endl;
			}
			

};


 main(){
	hocsinh a[20];
	int n,i;
	cout<<"nhap so luong hoc sinh: ";cin>>n;
	for(i=0 ; i<n ;i++){
		cout<<"nhap thong tin sinh vien thu "<<i+1<<":"<<endl;
		a[i].nhaphs();
		 a[i].tienhp();
		a[i].xuaths();
	}
}



















