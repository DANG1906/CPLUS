//nhap vao 3 diem ,  tinh chu vi , dien tich cua hinh tron va in ra man hinh
// chu vi 
//dien tich
// ban kinh r= 
#include <conio.h>
#include <iostream>
using namespace std;
class Diem{
	protected: double x,y;
	public: Diem(){
		x = y = 0.0;
	}
	Diem(double x1, double y1){
		x = x1 ; y = y1;
	}
	void xuat(){
		cout<<"\n("<<x<<", "<<y<<")";
	}
};
class hinh_tron : public Diem{
	private : 
	double r;
	public : hinh_tron(){
		r = 0.0;
	}
	hinh_tron(double x1, double y1, double r1):Diem(x1 , y1){
		r = r1;
	}
	double getR(){
		return r ; 
	}
	double chuvi(){
		return 2*3.14*r;
	}
	double dientich(){
		return 3.14 * r* r;
	}
};
main(){
	hinh_tron h(2.3, 3.4, 5.6);
	cout<<"\n hinh tron co tam: ";
	h.xuat();
	cout<<"\n hinh tron co ban kinh= "<<h.getR();
	cout<<"\n chu vi= "<<h.chuvi();
	cout<<"\n dien tich= "<<h.dientich();
	getch();
}


