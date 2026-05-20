//mang 1 chieu  28/11/2024 
/*
xay dung lop mang 1 chieu va
a. ham tao, ham huy
b. toan tu nhap, xuat mang 1 chieu
c. tinh tong cac phan tu chan
d. dem cac phan tu le
e. tim gia tri lon nhat
f. sap xep theo trinh tu tang dan
*/
#include<iostream>
#include<conio.h>
using namespace std;
class mang1c{
	protected :
		int x[20];//cac phan tu trong mang
		int n;// so phan tu
	public : 
	mang1c(){
		n = 0;
	}
	mang1c(int n1){
		n = n1;
	}
	~mang1c(){
		n = 0;
	}
	void nhap();
	void xuat();
	int tongchan();
	int ptule();
	int ptmax();
	void sapxep();
};
void mang1c::nhap(){
	int i;
	cout<<"\nnhap n : ";cin>>n;
	for(i = 0 ; i<n ; i++){
		cout<<"a["<<i<<"]";
		cin>>x[i];
	}
}
void mang1c::xuat(){
	int i;
	for(int i = 0  ; i< n ; i++)
		cout<<x[i]<<" ";
}
int mang1c::tongchan(){
	int tc= 0, i ;
	for(i = 0  ; i < n ; i++)
		if(x[i]%2 == 0)
			tc = tc + x[i];	
			cout<<tc<<endl;		
			return tc;
}
int mang1c::ptule(){
	int i,count = 0;
	for(i = 0 ; i< n ; ++i)
	if(x[i]%2 != 0)
	count++;
	cout<<count<<endl;
	return count;
}
int mang1c::ptmax(){
	int max,i;
	max = x[0];//gan max = phan tu dau tien
	for(i = 0 ; i <n ; i ++)
		if(max < x[i])
		max = x[i];
		cout<<max<<endl;
	return max;
}
void mang1c::sapxep(){
	int tg , i , j ;
	for( i = 0 ; i< n ; i ++){
		for(j = i+1 ; j < n ; j++)
		if(x[i] < x [j])//sx tang dan
		{
			tg = x[i];
			x[i] = x[j];
			x[j] = tg;
		}
	}
	cout<<"\nmang sau khi sap xep: "; xuat();
}
main(){
	mang1c a;
	cout<<"nhap mang: "; a.nhap();
	cout<<"\nin mang: ";a.xuat();
	cout<<"\ntong chan = ";a.tongchan();
	cout<<"\ncac phan tu le: ";a.ptule();
	cout<<"\nphan tu lon nhat = "; a.ptmax();
	a.sapxep();
	getch();
}