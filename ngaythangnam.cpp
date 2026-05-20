#include<iostream>

using namespace std;
class date
	{
	private: 
		int d,m,y;
		public:
			date(){
				d=1;
				m=1;
				y=1;
			}
			date(int d1,int m1,int y1){
				d=d1;
				m=m1;
				y=y1;
			}
			~date(){
				d=0;
				m=0;
				y=0;
			}
		void nngay(){
			do{
				cout<<"\n nhap ngay: ";
				cin>>d;
			}
			while((d<1)||(d>31));
			do{cout<<"\n nhap thang: ";
			cin>>m;
			}
			while((m<1)||(m>12));
			do{cout<<"\n nhap nam: ";
			cin>>y;
			}
			while((y<1)||(y>9999));
		}
		void xngay(){
			cout<<d<<"/"<<m<<"/"<<y;
		}
		int getday(){
			return d;
		}
		int getmonth(){
			return m;
		}
		int getyear(){
			return y;
		}
		date operator ++(int);
		date operator --(int);
};
date date::operator ++(int){
	date kq;
	kq.d = getday()+1;
	if((getmonth()==1)||(getmonth()==3)||(getmonth()==5)||(getmonth()==7)||(getmonth()==8)||(getmonth()==10)||(getmonth()==12))
	{
		if((kq.d>31)&&(getmonth()!=12))
		{
			kq.d = 1;
			kq.m = getmonth()+1;
			kq.y = getyear();
		}
		else if((kq.d>31)&&(getmonth()==12)){
			kq.d = 1;
			kq.m = 1;
			kq.y = y+1;
		}
		else{
			kq.d = getday()+1;
			kq.m = m;
			kq.y = y;
		}
	}
	else if((getmonth()==4)||(getmonth()==6)||(getmonth()==9)||(getmonth()==11))
	{
		if(kq.d>30){
			kq.d = 1;
			kq.m = m+1;
			kq.y = y;
		}
		else{
			kq.d  = getday()+1;
			kq.m = m;
			kq.y = y;
		}
	}
	else if(getmonth()==2)
	{
		if(getyear()%4==0)
		{
			if(kq.d>29){
			
			kq.d = 1;
			kq.m = m+1;
			kq.y = y;
			}
		else {
			kq.m = m;
			kq.y = y;
		}
	}
	if(getyear()%4!=0){
		if(kq.d>28)
		{
			kq.d = 1;
			kq.m = getmonth()+1;
			kq.y = getyear();
		}
		else if(kq.d < 28)
		{
			kq.m = getmonth();
			kq.y = getyear();
		}
		}
	}
return kq;

}
int main(){
	date n;
	cout<<" "; n.nngay();
	cout<<"\n ngay __"; n.xngay();
	cout<<"\n ngay tiep theo__ "; n++.xngay();
}















