#include<iostream>
#include<conio.h>
using namespace std;
template <class val> void swap1(val &a, val &b){
	val tg;
	tg = a;
	a = b ; 
	b = tg;
}
main(){
	int x = 4 , y = -5;
	float a= 1.2 , b = 0.5 ;
	swap1(x,y);
	cout<<"x= "<<x<<"\ty= "<<y<<endl;
	swap1(a,b);
	cout<<"a= "<<a<<"\b= "<<b<<endl;
	getch();
}