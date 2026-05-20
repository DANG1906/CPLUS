#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int n , da;
	cout << "nhap n: ";
	cin >> n;
	da = n*(n+1)*(2*n+1)/6;
	// cach 2 dung vong lap for
	// for (i=0 ; i<=n ; ++i)
	// {da += i * i}
	cout << "ket qua = "<< da << endl;
	return 0;
}