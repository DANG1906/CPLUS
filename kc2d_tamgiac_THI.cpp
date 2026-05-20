//xay dung diem gom toa do x , y. voi cac phuong thuc
//nhap diem
// in diem
// tinh khoang cach 2 diem
// viet chuong trinh nhap vao 3 diem
//a . in toa do 3 diem len man hinh
//b. kiem tra 3 diem do co tao thanh tam giac ko. neu co thi tam giac gi
//c. tinh chu vi dien tich tam giac
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
class diem{
	protected: 
	int x,y;
	public : 
	void nhapdiem();
	void indiem();
	float kc2d(diem d2);
};
void diem:: nhapdiem(){
	cout<<"x = "; cin>>x;
	cout<<"y = "; cin>>y;
}
void diem::indiem(){
	cout<<"( "<<x<<","<<y<<" )"<<endl;
}
float diem::kc2d(diem d2){
	float d;
	d = sqrt((x - d2.x)*(x - d2.x) + (y - d2.y)*(y-d2.y));
	return d;
}
main(){
	diem A, B, C;
	float a,b,c,cv,s,p; //a: canh BC, b: canh AC , c: canh BA ; p la nua chu vi
	cout<<"nhap diem A: "; A.nhapdiem();
	cout<<"nhap diem B: "; B.nhapdiem();
	cout<<"nhap diem C: "; C.nhapdiem();
	cout<<"A = ";A.indiem();
	cout<<"B = ";B.indiem();
	cout<<"C = ";C.indiem();
	a = B.kc2d(C);//khoang cach diem B den diem C
	b = A.kc2d(C);
	c = A.kc2d(B);
	if((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(b+c>a)&&(a+c>b))
	{
		cout<<"La tam giac ";
		if((a==b)&&(a==c)&&(b==c))
			cout<<"deu"<<endl;
		else if((a==b)||(a==c)||(b==c))
			cout<<"can"<<endl;
		else if((a*a == b*b+c*c)||(b*b == a*a+c*c)||(c*c == a*a+b*b))
			cout<<"vuong"<<endl;
		else cout<<"thuong"<<endl;
		cv = a+b+c;
		p = (float)cv/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"chu vi tam giac = "<<cv<<endl;
		cout<<"diem tich tam giac = "<<s<<endl;	
		getch();
		return 0;
	}	
	else
	{ 
	cout<<"\n khong phai la tam giac";
	
	}
	}
