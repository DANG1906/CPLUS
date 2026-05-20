#include<iostream>
using namespace std;
int main(){
	int phao, ni , len, coc, giay;
	int luachon = 0;
	do{
		cout<<"ban can biet gia bo do nao?\n"
			<<"1.ao phao\n2.ao ni\n3.ao len\n4.ao coc\n5.giay\n0.Thoat\n";
			cin>>luachon;
		switch(luachon){
			case 1: cout<<"400k\n";
				cin >>phao;
				break;
			case 2: cout<<"150k\n";
				cin >>ni;
				break;
			case 3: cout<<"300k\n";
				cin >>len;
				break;
			case 4: cout<<"50k\n";
				cin >>coc;
				break;
			case 5: cout<<"1000k\n";
				cin >>giay;
				break;
			case 0: cout<<"cam on quy khach\n";
				break;
				default: cout<<"xin moi quy khach chon lai!\n";
		}
	
	}	while(luachon!=0);
		cout<<"=========END========";
}
