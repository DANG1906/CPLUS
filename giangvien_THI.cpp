#include<iostream>
using namespace std;
class nguoi{
	protected:
		string hoten;
		string namsinh;
		
	public:
		nguoi(){
			hoten = " ";
			namsinh = " ";
			
		nguoi(string hoten, string namsinh){
			this->hoten = hoten;
			this->namsinh = namsinh; 
		}
		~nguoi(){
			hoten = " ";
			namsinh = " ";
		}
		void nhapgv(){
			cout<<"nhap ho ten sv : ";cin.ignore();getline(cin, hoten);
			cout<<"nam sinh: ";cin>>namsinh;
					nguoi(hoten,namsinh);

		}
		void xuatgv(){
			cout<<"ho ten: "<<hoten<<endl;
			cout<<"namsinh: "<<namsinh<<endl;
		}
		nguoi(hoten,namsinh);
};
class giangvien : public nguoi{
	public:
	string monct;
	string mondd;
	int sobaib;
	public: 
	void nhap(){
		nhapgv();
		cout<<"mon cong tac: ";cin>>monct;
		cout<<"mon dang day: ";cin>>mondd;
		cout<<"so bai bao: ";cin>>sobaib;
	}
	void xuat(){
		xuatgv();
		cout<<"mon cong tac: "<<monct<<endl;
		cout<<"mon dang day: "<<mondd<<endl;
		cout<<"so bai bao: "<<sobaib<<endl;
	}
}
main(){
	int n, i;
	giangvien() gv[20];  	
		cout<<"nhap so giang vien: ";cin>>n;
	for(i = 0 ; i<n ; i++){
		cout<<"nhap thong tin giang vien thu"<<i+1<<": ";
		gv[i].nhap();
       }
}













