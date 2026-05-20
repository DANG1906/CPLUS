#include<iostream>
#include<conio.h>

using namespace std;
class diem{
	protected:
		double x,y;
		public:
diem()
{
	x=y=0.0;
}
diem(double x1, double y1)
{
	x = x1; y = y1;
}
void xuat()
{
	cout << "\n("<<x <<","<<y<<")"; 
}
};
class hinhtron:public diem{
	private : double r;
	public:
		hinhtron()
		{
			r=0.0;
		}
		hinhtron(double x1, double y1,double r1):diem(x1,y1)
		{
			r=r1;
		}
		double getr()
		{
			return r;
		}
		double chuvi()
		{
			return 2*3.14*r;
		}
		double dientich()
		{
			return 3.14*r*r;
		}
};
main(){
	hinhtron h(2.5,3.5,8);
	cout<<"\n hinh tron co tam: ";
	h.xuat();
	cout<<"\n co ban kinh ="<<h.getr();
	cout<<"\n cv= "<<h.chuvi();
	cout<<"\n dt = "<<h.dientich();
	getch();
}


	