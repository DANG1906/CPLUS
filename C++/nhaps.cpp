#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int a , b;
	cout<< "nhap a: ";cin >> a;
	cout<< "nhap b: ";cin >> b;
	int tong, hieu, tich;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	float thuong = (float)a / b;

	cout <<"tong="<<tong<<"\nhieu="<<hieu<<"\ntich="<<tich<<"\nthuong="<<fixed << setprecision(2) << thuong << endl;	
	
}