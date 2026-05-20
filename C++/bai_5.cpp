#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	float r , cv ,s ; 
	cout << "nhap ban kinh r ="; 
	cin >> r;
	
	cv = 2 * 3.14 * r;
	s = 3.14 * pow(r,2); 
	// cout 1 luot luon
	cout << fixed << setprecision(2) ;
	cout <<"chu vi ="<< cv << endl;
	cout <<"dien tich ="<< s << endl;
	
return 0;
}

