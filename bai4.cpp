#include<iostream>
#include<cmath>
using namespace std;
class DaThuc{
	private:
		int n, a[10];
		
	public:DaThuc(){
		n = 0;
		a[n]=0;
	}
	DaThuc(int c, int b[10])
	{
		int i;
		n = c;
		for (i=0; i<c ; i++)
			a[i] = b[i];
	}
	~DaThuc(){
		n=0;
		a[n]=0;
	}
	void nhapdt();
	void xuatdt();
	DaThuc Tong(DaThuc dt2);
	DaThuc Hieu(DaThuc dt2);
	
};
void DaThuc ::nhapdt(){
	cout <<"\nnhap bac cua da thuc:";cin>>n;
	cout <<"\nnhap he so cua da thuc: ";
	for(int i = 0; i<=n ; i++){
		cout << "\na["<<i<<"]=";
		cin >> a[i];
	}
};
void DaThuc ::xuatdt()
{
	int i;
	cout<<a[n]<<"x"<<n;
	for(int i=n-1; i>=1; i--){
	
	if(a[i]>0)
		cout <<"+"<<a[i]<<"x"<<i;
	else if(a[i]<0)
		cout << a[i]<<"x"<<i;
}
	if (a[0]>=0)
		cout<<"x^"<<a[0];
	else
		cout << a[0];
		
};
DaThuc DaThuc::Tong(DaThuc dt2){
	DaThuc t;
	int i;
	if(n>=dt2.n)
	{
		t.n = n;
		for (i=0; i<=dt2.n;i++)
		{
			t.a[i] = a[i] + dt2.a[i];
		}
		for (i = dt2.n+ 1;i<=n;i++)
		t.a[i] = a[i];
	}
	else if(n<dt2.n){
		t.n = dt2.n;
		for(i = 0; i<=n ;i++){
			t.a[i] = dt2.a[i] + a[i];
		}
		for(i =n+1; i<= dt2.n;i++)
		t.a[i] = dt2.a[i];
	}
	return t;
};
DaThuc DaThuc::Hieu(DaThuc dt2){
	DaThuc h;
	int i;
	if(n>dt2.n){
		h.n=n;
		for(i=0;i<=dt2.n;i++){
			h.a[i]=a[i]-dt2.a[i];
		}
		for(i=dt2.n+1; i<=n; i++)
		h.a[i] = a[i];
	}
	else{
		h.n = dt2.n;
		for (i=0; i<=n ; i++){
			h.a[i] = a[i] - dt2.a[i];
		}
		for (i=n+1; i<=dt2.n;i++)
		if(dt2.a[i]>0)
			h.a[i]= -dt2.a[i];
		else 
			h.a[i] = (-1) * dt2.a[i];	
	}
	return h;
};
main(){
	DaThuc dt1,dt2,t;
	cout<<"\nnhap da thuc 1: "; dt1.nhapdt();
	cout<<"\nnhap da thuc 2: "; dt2.nhapdt();
	cout<<"\nDT1 ="; dt1.xuatdt();
	cout<<"\nDT2= "; dt2.xuatdt();
	cout<<"\ndt1 + dt2= "; dt1.Tong(dt2).xuatdt();
	cout<<"\ndt1 - dt2= "; dt1.Hieu(dt2).xuatdt();
}








