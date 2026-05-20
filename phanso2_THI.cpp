#include<iostream>
#include<conio.h>
using namespace std;
class ps{
	protected: int t; 
				int m;
	public : ps(){
		t = 0;
		m = 1;
	}
			ps(int t1, int m1){
				t = t1; 
				m = m1;
			}
			~ps(){
				t = 0;
				m = 1;
			}
			friend istream & operator >> (istream &is , ps &p);
			friend ostream & operator << (ostream &os , ps p);
			ps rutgon();
			ps operator + (ps p2);
			ps operator - (ps p2);
			ps operator * (ps p2);
			ps operator / (ps p2);
			
};
istream &operator>> (istream &is, ps &p){
	cout << "\nnhap tu so: "; is>>p.t;
	cout << "nhap mau so: "; is >> p.m;
	return is;
}
ostream &operator<<(ostream &os , ps p){
	os <<p.t<<"/"<<p.m;
	return os;
}
int ucln(int a, int b){
		if(a==b) 
		return a;
		else{
			while (a!=b)
			{
				if(a>b) a = a-b;
				else 
				b = b - a;
			}
		}	
		return a;
}
ps ps::rutgon(){
	ps p ;
	p.t = t/ucln(t,m);
	p.m = m/ucln(t,m);
	return p;
}
ps ps::operator + (ps p2){
	ps tong;
	tong.t = t * p2.m + p2.t * m;
	tong.m = m * p2.m;
	return tong;
} 
ps ps::operator -(ps p2){
	ps hieu;
	hieu.t = t * p2.m - p2.t * m;
	hieu.m = m * p2.m;
	return hieu;
}
ps ps::operator *(ps p2)
{	
	ps tich;
	tich.t = t * p2.t;
	tich.m = m * p2.m;
	return tich;
}
ps ps::operator /(ps p2){
	ps thuong;
	thuong.t = t * p2.t;
	thuong.m = m * p2.m;
	return thuong;
}
class ps2: public ps{
	public: 
	ps2 operator = (ps2 p2){
		this -> t = p2.t;
		this -> m = p2.m;
		return * this;
	}
	int operator > (ps2 p2){
		if(t * p2.m > p2.t * m)
		return 1;
		else 
		return 0;
	}
};
/*viet ct nhap vao 1 day cac phan so 2.
a. in cac phan so trong lop phan so 2 len man hinh
b. dua ra man hinh phan so lon nhat trong phan so 2
c. sap xep phan so theo trat tu tang dan
d. tinh hieu cac phan so trong day phan so2. in ket qua len man hinh
*/
main(){
	ps2 p[20], max, tg;
	int i, n;
	cout <<"nhap so luong phan so n = ";cin>>n;
	for( i = 0 ; i<n ; i++){
		cout << "p["<<i<<"] = ";
		cin>>p[i];
	}
	cout<<"\nDay phan so gom: ";
	for(i = 0; i<n ; i++){
		cout << p[i].rutgon()<<" ";		 
	}
	//b.phan so lon nhat
	max = p[0];
	for(i = 0; i<n ;i++)
	if(p[i] > max)
	max = p[i];
	cout << "\nPhan so lon nhat = ";cout<<max;
	//c.sap xep 
	for(i=0 ; i<n ; i++)
	for(int j= i+1; j<n ; j++)
	if (p[i] > p[j]){
		tg = p[i];
		p[i] = p[j];
		p[j] = tg ;
	}
	cout << "\nDay phan so sau khi sap xep: ";
	for(i=0 ; i<n ;i++)
	cout<<p[i]<<" ";
	//d.tinh hi?u 
	ps2 tong;
	for (i = 0; i<n ;i++)
	getch();
}
