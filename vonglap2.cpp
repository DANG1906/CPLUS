#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int luachon=0;
	float a,b;
	do{
		cout<<"moi ban chon !\n"
			<<"1. cong hai so\n 2. tru hai so\n 3.nhan hai so\n 4. chia hai so\n 0. thoat\n";
		cin>>luachon;
		switch(luachon){
		case 1: cout<<"nhap a va b" ;
				cin >> a>>b;
				cout << "a + b = "<<a + b<<endl;
				break;
		case 2: cout<<"nhap a va b";
				cin >> a>>b;
				cout << "a - b = "<<a - b<<endl;
				break;
		case 3: cout<<"nhap a va b";
				cin >> a>>b;
				cout << "a * b = "<<a * b<<endl;
				break;
		case 4: cout<<"nhap a va b";
				cin >> a>>b;
				cout << "a / b = "<<a / b<<endl;
				break;
		case 0: cout<<"see you again!";
				break;
			default: 
				cout<<"nhap sai moi ban nhap lai\n";	
				break;
		}
		
	}while(luachon != 0);

	return 0;
}
