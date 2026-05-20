#include<iostream>
 using namespace std;
  int main(){
  	int masv, hoten, dtoan, dvan,danh;
  	cout<<"nhap masv:";cin >> masv ;
	cout<<"\nnhap hoten:";cin >> hoten;
  	cout<<"\nnhap diem toan: "<<"\nnhap diem van: "<<"\nnhap diem anh";
  	cin >>dtoan >>dvan >> danh;
  	
  	float tbc = float(dtoan+dvan+danh)/3;
  	cout <<"\ma sinh vien: "<<masv<<"\ten sinh vien: "<<"\ndiem tb = "<<float(tbc)<<endl;
  	return 0;
  }