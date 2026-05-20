#include<conio.h>
#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	int uc = a;
	while (a!=b)
	if(a>b)
	     a = a-b;
	     else 
	     b = b-a;
	uc = a;
	return uc;
}
class ps 
{
	private:
		int t;
		int m;
	public:
		void nhapps();
		void inps();
		ps rutgon();
		ps tong(ps p2);
		ps hieu(ps p2);
		ps tich(ps p2);
		ps thuong(ps p2);
};
void ps::nhapps()// nhap cac thuoc tinh
{
	cout<<"ts =";cin>>t;
	cout<<"ms =";cin>>m;
}
void ps::inps()
{
	cout<<t<<"/"<<m;
}
ps ps::rutgon()
{
	ps ps1;
	ps1.t = t/ucln(t,m);
	ps1.m = m/ucln(t,m);
}	
ps ps::thuong(ps p2)
{
	ps a;
	a.t = t * p2.m + p2.t * m;
	a.m = m*p2.m;
	return a;
}
ps ps::tong(ps p2)
{
	ps b;
	b.t= t * p2.m;
	b.m= m * p2.t;
	return b;
	}	
main()
{
	ps p1, p2, p3, p4;
	cout<<"nhap ps1:"; p1.nhapps();
	cout<<"\nnhap ps2:"; p2.nhapps();
	cout<<"\n p1="; p1.rutgon().inps();
	cout<<"\n p2="; p2.rutgon().inps();
	cout<<"\n p1 + p2";p1.tong(p2).rutgon().inps();
	cout<<"\n p1/p2 =";p1.thuong(p2).rutgon().inps();
	getch();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	