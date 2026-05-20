#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std ;

int main(){
	int  a , b ;
	cin >> a >> b;
	cout <<"tong = "<< a+b;
	cout <<"\nhieu = "<< a-b;
	cout <<"\ntich = "<< a*b;
    cout <<"\nthuong= "<< float(a)/b ;
	float c = float(a)/b;
	cout << setprecision(2) <<fixed<< c << endl ;
	return 0;
	
}