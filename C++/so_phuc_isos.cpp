#include<iostream>
#include<conio.h>
using namespace std;

class sophuc{
		private:
			int thuc,ao;
		public:
			sophuc()
			{
				thuc = 0;
				ao = 0;
			}
			sophuc(int a, int b)
			{
				thuc = a;
				ao = b;
			}
		friend istream & operator >>(istream &is, sophuc&p);
		friend ostream & operator <<(ostream &os, sophuc p);
 		sophuc operator + (sophuc p1);
 		sophuc operator * (sophuc p1);
};
istream &operator >> (istream &is, sophuc &p)
{
	cout<<"PT = ";is>>p.thuc;
	cout<<"PA = ";is>>p.ao;
	return is;
}
ostream & operator<< (ostream &os,sophuc p)
{
	if(p.ao>0)
	os<<p.thuc <<"+"<< p.ao<<"*i"<<endl;
	else os<<p.thuc<<p.ao<<"*i";
	return os;
}
sophuc sophuc::operator + (sophuc p1)
{
	sophuc t;
	t.thuc = thuc + p1.thuc;
	t.ao = ao+ p1.ao;
	return t;
}
sophuc sophuc::operator *(sophuc p1)
{
	sophuc tich;
	tich.thuc = thuc*p1.thuc-ao*p1.ao;
	tich.ao = thuc*p1.ao + ao*p1.thuc;
	return tich;
}
main(){
	sophuc p[10],t(0,0),tich(0,0);
	int n, i;
	cout<<"\n nhap slg so phuc n= ";cin >> n;
	for(i=0; i<n ; i++)
	{
		cout << "SP thu "<<i<<"="<<endl;
		cin >> p[i];
	}
	cout<<"\n danh sach so phuc gom: "<<endl;;
	for(i=0; i<n ;i++)
	cout<<p[i]<<endl;
	cout<<"tong cac so phuc =";
	 for(i=0; i<n; i++)
	  t = t+ p[i];
	  cout<<t;
	  getch();
}


