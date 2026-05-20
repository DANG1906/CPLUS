#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int  a , b , c;
	cin >> a; 
	 cin >> b;
	 cin >> c;
	long long s = a * (b+c) + b * (a+c) ;
	cout << "gia tri S ="<< s << endl;

	return 0;
}