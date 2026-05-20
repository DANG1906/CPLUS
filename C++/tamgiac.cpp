#include<iostream>
#include<conio.h>
#include<math.h>
//chua xong

using namespace std;
class diem{
	protected: float x, y;
	public:
		diem(){
			x=y=0.0;
		}
		diem(float x1, float y1){
			x=x1 , y=y1;
		}
		void nhap(){
			cout<<"x= "<<x;cin>>x;
			cout<<"y= "<<y;cin>>y;
		}
		void xuat(){
			cout<<"\n(x = "<<x<<","<<"y= "<<y<<")";
		}
	float kc2d(diem d2)
	{
		float d;
		d=sqrt((x-d2.x)*(x-d2.x)+(y-d2.y)*(y-d2.y));
		return d;
	}
};

class tamgiac :public diem{
		private:
		diem d1,d2,d3;
		public:
			void nhaptamgiac(){
	cout<<"\n nhap diem t1= ";d1.nhap();
	cout<<"\n nhap diem t2= ";d2.nhap();
	cout<<"\n nhap diem t3= ";d3.nhap();
	}
	
void intamgiac()
{
	d1.xuat();cout<<",";d2.xuat();cout<<",";d3.xuat();cout<<",";
}
void kttamgiac()
{
	float a,b,c;
	a = d1.kc2d(d2);
	b = d2.kc2d(d3);
	c = d3.kc2d(d1);
	if((a>0)&&(b>0)&&(c<0)&&(a+b>c)&&(a+c>b)&&(b+c>a))
	{
		cout<<"\n la tam giac";
		if((a==b)&&(a==c)&&(a==c))
		cout <<"can";
		else if((a==b)&&(b==c)&&(c==a))
		cout<<"deu";
		else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
		cout<<"vuong";
	}
	else
	cout<<"khong la tam giac";
}
float cv()
{float a,b,c;
a = d1.kc2d(d2);
b = d2.kc2d(d3);
c = d3.kc2d(d1);
return (a+b+c);
}
float dt()
{
	float a,b,c,p;
	a = d1.kc2d(d2);
	b = d2.kc2d(d3);
	c = d3.kc2d(d1);
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
};
main(){
	tamgiac g[10];
	int i,n;
	cout << "\n nhap so tam giac: ";cin >>n;
	cout<<"-----nhap vao mot day tam giac---";
	for(i=0; i<n; i++)
	{
		cout<<"\n nhap tam giac thu: "<<i;
		g[i].nhaptamgiac();
	}
	cout<<"---day tam giac ban dau gom: ---";
	for(i=0;i<n;i++)
	{
		cout<<"\n tam giac thu: "<<i;
		g[i].intamgiac();
		g[i].kttamgiac();
		cout<<"\n dien tich tg: "<<g[i].dt();
		cout<<"\n ----------";
	}
	cout<<"\n -----tam giac co dien tich lon nhat:-----";
	int max = g[0].dt(),vt=0;
	for(i=0;i<n;i++)
	if(g[i].dt()>max)
	{
		max = g[i].dt();
		vt=i;
	}
	cout<<"\n tam giac co dien tich lon nhat:";
	g[vt].intamgiac();cout<<g[vt].dt();
	getch();
}
			
























