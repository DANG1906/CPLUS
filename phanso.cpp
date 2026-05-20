#include<iostream>
#include<conio.h>
using namespace std;
class phanso{
	protected: 
	int tuso;
	int mauso;
	public :
	phanso(){
		tuso=0;
		mauso=0;
	}
	phanso(int tuso1,int mauso1){
		tuso = tuso1;
		mauso = mauso1;
	}
	~phanso(){
		tuso = 0;
		mauso  = 0;
	}
	friend istream&operator>>(istream &is,phanso&p);
	friend ostream&operator<<(ostream &os,phanso p);
	phanso rutgon();
	phanso operator + (phanso p2);
	phanso operator - (phanso p2);
	phanso operator * (phanso p2);
	phanso operator / (phanso p2);
};

istream & operator>>(istream&is, phanso&p)
{
	cout<<"\n nhap ts = ";is>>p.tuso;
	cout<<"\n nhap ms = ";is>>p.mauso;
	return is;
}
ostream & operator<<(ostream &os, phanso p){
	os<<p.tuso<<"/"<<p.mauso;
	return os;
}
int ucln(int a, int b)
{
	if(a==b)
		return a;
	else{
		while (a!=b){
			if(a>b)a=a-b;
			else 
			b =b -a;
		}
	}
	return a;
}
phanso phanso::rutgon(){
	phanso p;
	p.tuso = tuso/ucln(tuso,mauso);
	p.mauso = mauso/ucln(tuso,mauso);
	return p;
}
phanso phanso::operator +(phanso p2){
	phanso tong;
	tong.tuso = tuso*p2.mauso+p2.tuso*mauso;
	tong.mauso = mauso * p2.mauso;
	return tong;
}
phanso phanso::operator -(phanso p2){
	phanso hieu;
	hieu.tuso = tuso*p2.mauso-p2.tuso*mauso;
	hieu.mauso = mauso * p2.mauso;
	return hieu;
}
phanso phanso::operator *(phanso p2){
	phanso tich;
	tich.tuso = tuso*p2.mauso*p2.tuso*mauso;
	tich.mauso = mauso * p2.mauso;
	return tich;
}
phanso phanso::operator /(phanso p2){
	phanso thuong;
	thuong.tuso = tuso*p2.mauso+p2.tuso*mauso;
	thuong.mauso = mauso * p2.mauso;
	return thuong;
}
class phanso2: public phanso{
	public: 
	phanso2 operator = (phanso2 phanso){
		this->tuso = phanso.tuso;
		this->mauso = phanso.mauso;
		return *this;
	}
	int operator > (phanso2 phanso2){
		if(tuso*phanso2.mauso > phanso2.tuso *mauso)
		return 1;
		else 
		return 0;
	}
};
main(){
	phanso2 p[10],max ,tg;
	int i,n;
	cout<<"\n nhap so luong phan so: ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"P["<<i<<"]=";
		cin>>p[i];
	}
	cout<<"\n day phan so gom: ";
	for(i=0;i<n;i++)
	cout<<p[i].rutgon()<<" ";
	max = p[0];
	for(i=1 ; i<n ; i++)
		if(p[i]>max)
		max = p[i];
		cout<<"\n phan so lon nhat = ";cout<<max;
	
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(p[i]>p[j]){
				tg = p[i];
				p[i] = p[j];
				p[j]=tg;
			}
		}
	}
	cout<<"\n day phan so sau khi sap xep: ";
	for(i=0 ;i<n;i++){
		cout<<p[i]<<" ";
	}
	phanso tong;
	for(i=0; i<n;i++)
		tong = tong + p[i];
	cout<<"\n phan so tong = ";cout<<tong.rutgon();
	getch();
}