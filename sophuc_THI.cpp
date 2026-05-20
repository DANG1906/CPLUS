#include<iostream>
#include<cmath>
using namespace std;
// So phuc
class sophuc{
	protected: 
	int thuc, ao;
	public: 
	sophuc(){
		thuc = 0;
		ao = 0;
	}
	sophuc(int a , int b){
		thuc = a;
		ao = b;
	}
	void nhap();
	void xuat();
	sophuc tong(sophuc p2);
	sophuc hieu(sophuc p2);
	sophuc tich(sophuc p2);
	float modul();
};
void sophuc::nhap(){
cout<<"nhap phan thuc: ";cin>>thuc;
cout<<"nhap phan ao: ";cin>>ao;
}
void sophuc::xuat(){
	if(ao>0) cout<<thuc<<"+"<<ao<<"*i"<<endl;
	else cout<<thuc<<ao<<"*i";
}
sophuc sophuc::tong(sophuc p2){
	sophuc t;
	t.thuc  = thuc + p2.thuc;
	t.ao  = ao + p2.ao;
	return t ; 
}
sophuc sophuc::hieu(sophuc p2){
	sophuc t;
	t.thuc = thuc - p2.thuc;
	t.ao = ao - p2.ao;
	return t;
}
sophuc sophuc::tich(sophuc p2){
	sophuc tich;
	tich.thuc  = thuc * p2.thuc - ao*p2.ao;
	tich.ao = thuc *p2.ao + ao*p2.thuc;
	return tich;
}
float sophuc::modul(){
	return sqrt(thuc*thuc + ao*ao);	
}
main(){
	sophuc p[10];
	int n,i,j,vt;
	float max;
	cout<<"\nnhap so luong SP= ";cin>>n;
	for(i=0; i<n ;i++)
		p[i].nhap();
	cout<<"danh sach so phuc gom : "<<endl;
	for(i = 0 ; i<n ; i++){
		p[i].xuat();
		cout<<endl;
	}
		max = p[0].modul();
		vt = 0;
		for(i = 1 ; i<n ; i++)
			if(max < p[i].modul()){
				max = p[i].modul();
				vt = i;
			}
			cout<<"so phuc co modul lon nhat la: ";
			p[vt].xuat();
			//for (i = 0; i<n ; i++)
			//t.tong(p[i].xuat();
			return 0 ; 
		
}









