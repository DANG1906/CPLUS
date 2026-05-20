#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class diem
{
	private:
		int x,y;
	public:
		void nhapdiem();
		void indiem();
		float KC2D(diem d2);
	};
void diem::nhapdiem()
{
	cout<<"x ="; cin>>x;
	cout<<"y ="; cin>>y;
}
void diem::indiem()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
float diem::KC2D(diem d2)
{
	float d;
	d = sqrt((x-d2.x)*(x-d2.x)+(y-d2.y)*(y-d2.y));
	return d;
}
main()
{
diem A,B,C;
float a,b,c,cv,s,p;
cout<<"\n nhap diem A:";A.nhapdiem();
cout<<"\n nhap diem B:";B.nhapdiem();
cout<<"\n nhap diem C:";C.nhapdiem();
cout<<"A=";A.indiem();
cout<<"B=";B.indiem();
cout<<"C=";C.indiem();
a = B.KC2D(C);
b = A.KC2D(C);
c = A.KC2D(B);
if((a>0)&&(b>0)&&(c>0)&&(a+b+c)&&(b+c>a)&&(a=c>b))
{
      cout<<"la tam giac";
	  if((a==b)&&(b==c)&&(c==a))
	  cout<<"deu";
	  else if((a==b)||(b==c)||(c==a))
	  cout<<"can";
	  else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
	  cout<<"vuong";
	  cv = (a+b+c);
	  p = cv/2;
	  s = sqrt(p*(p-a)*(p-b)*(p-c));
	  cout<<"\n chu vi ="<<cv;
	  cout<<"\n dien tich ="<<s;
}
else 
cout <<"\n khong la tam giac";
getch();
}










