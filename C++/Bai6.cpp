#include<iostream>
#include<math.h>
using namespace std;
main(){
	int a , b, c , d;
	cout <<"nhap a: "; cin>>a;
	cout <<"nhap b: "; cin>>b;
	cout <<"nhap c: "; cin>>c;
	d = pow(b, 2) - 4*a*c;
	if(a==0){
		cout <<"nhap lai a>0 ";
	}
	else if(d<0 ) {
	cout << "phuong trinh vo nghiem";
}
	
	else if(d==0){  //chú ý ==
		float kep = -b/(float)(2*a);  //ki?u float 
		cout << "phuong trinh co nghiem kep: X= "<<kep<<endl;
	}
	else if (d>0){
	cout << "phuong trinh co 2 nghiem phan biet:";
	float x1 = (-b-sqrt(d))/(float)2*a;//caí dòng này ph?i có ngo?c 
	cout << "\nX1 = "<< x1 <<endl;
	float x2 = (-b+sqrt(d))/(float)2*a;//caí dòng này ph?i có ngo?c 
	cout << "\nX2 = "<< x2 <<endl;
}
else {
	cout<<"nhap lai chu so ";
}
	

}// bai nay chua hoan chinh n?u (a==0)