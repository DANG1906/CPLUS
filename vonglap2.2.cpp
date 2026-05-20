#include<iostream>

using namespace std;
int main(){
	float a , b , c , d , e;
	int luachon = 0;
	do{
		cout <<"ban muon du lich o dau\n"
				<<"1.Chau Au\n 2.Chau My\n 3.Chau Dai Duong\n 4.Chau phi\n 5.Chau Nam Cuc\n 0.Thoat\n";
	    cin>>luachon;
		switch (luachon){
			
			case 1: cout<<"chuc mung ban nhan duoc 1000$";
					cin >> a ;
					break;
			case 2: cout<<"chuc mung ban nhan duoc 2000$";
					cin >> b ;
					break;
			case 3: cout<<"chuc mung ban nhan duoc 5000$";
					cin >> c ;
					break;	
			case 4: cout<<"chuc mung ban nhan duoc 8000000$";
					cin >> d ;
					break;	
			case 5: cout<<"chuc mung ban nhan duoc 9000$";
					cin >> e ;
					break;
			case 0: cout<<"hen gap lai";
					break;
		default: cout<<"ban da chon sai moi ban chon lai\n";
		break;
	}
	}while(luachon!=0);
	cout<<"========END==========";
	
}