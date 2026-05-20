#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
 int main(){
 	float C ,F  ;
 	cout <<"nhap so nhiet do: ";
 	cin >> C ;
	// doi do C ---> F
	F = (C * 9 / 5) + 32;
	// phai nho khai bao thu vien de dung "setprecision"
	cout << fixed <<setprecision(2);
	cout << "Gia tri cua F = "<< F << endl;
	
 	return 0;
 	
 }