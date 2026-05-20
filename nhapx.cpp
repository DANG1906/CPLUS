#include<iostream>
#include<math.h>

using namespace std;
class sinhvien{
	private: 
	string ten,diachi,ngaysinh;
	int tuoi,a[30],n;
	public:
		
		void nhaptt();
		void xuattt();
		int asc(sinhvien oc);
		int tongle(sinhvien ngu);
		
};

 void sinhvien::nhaptt(){
 	cin.ignore();
	cout <<"\nnhap ho ten: ";getline(cin,ten);
	cout<<"nhap dia chi: ";cin>>diachi;
	cout<<"nhap ngay sinh: ";cin>>ngaysinh;
	cout<<"nhap tuoi: ";cin>>tuoi;
}
void sinhvien::xuattt(){

	cout<<"\nho va ten: "<<ten<<endl;
	cout<<"dia chi: "<<diachi<<endl;
	cout<<"ngay sinh: "<<ngaysinh<<endl;
	cout<<"tuoi: "<<tuoi<<endl;
}
int sinhvien::tongle(sinhvien ngu){
	int tuoi = 0 ;
for(int i = 0 ; i<n ; i++){
	if(a[i]%2!=0){
		cout<<"cac sinh vien co so tuoi le: ";
			tuoi+= a[i];
				
	}
}

}
int sinhvien::asc(sinhvien oc){
	int sx,n,j;
	for(int i = 0 ; i <n-1 ;i++){
		for(j = i+1 ; j<n ; j++){
			if(a[i] > a[j]){
				sx = a[i];
				a[i] =a [j];
				a[j] = sx;
			}
		}
	}
	xuattt();
}
int main (){
	int n;
	sinhvien a[20];
	cout<<"nhap so sinh vien ";cin>>n;
for(int i=0;i<n;i++){
	cout<<"sinh vien thu  "<<i+1;
	a[i].nhaptt();
}
for(int i=0;i<n;i++){
	cout<<"sinh vien thu  "<<i+1;
	a[i].xuattt();
}
for(int i=0;i<n;i++){
	
	cout<<"sinh vien co so tuoi le: "<<a[20].tongle(a[20]);
}
for(int i=0;i<n;i++){
	
	cout<<"sap xep sinh vien: "<<a[20].asc(a[20]);
}

return 0;
}















