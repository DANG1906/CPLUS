#include<iostream>
#include<conio.h>
using namespace std;
/*12/12/2024
6.lop ma tran 
*/
class matrix{
	public: 
		int **x;
		int n,m;
	public :
		matrix(){
			n = 0 ;
			m = 0 ; 
		}
		matrix(int n1, int m1):n(n1),m(m1){
			x = new int*[n];//cap phat bo nho
			for (int i = 0 ; i<n ; i++)
			{
				x[i] = new int [m]{0};	
			}
		}
		void nhap(){
			for(int i = 0 ; i<n ; i++)
			for(int j = 0 ; j<m ; j++){
				cout<<"x["<<i<<","<<j<<"]= ";
				cin >> x[i][j];
			}
		}
		void xuat(){
			for (int i = 0 ;i<n ;i++){
			for (int j = 0 ;j<m ;j++)
			cout << x[i][j]<<" ";
			cout<<"\n";	
			}
		}
		friend matrix cong(matrix &a, matrix &b);
		friend int tong_hang2(matrix &a);
		friend int tong_4dv(matrix &a);
};
matrix cong (matrix &a , matrix &b){
	if((a.n!=b.n)||(a.m!=b.m))
		cout<<"2 ma tran khong cung cap";
	matrix tong(a.n , a.m);
	for(int i = 0; i<a.n ;i++){
		for(int j = 0 ; j<a.m ;j++)
		tong.x[i][j] = a.x[i][j] + b.x[i][j];
	}
	return tong;
}
int tong_hang2(matrix &a){
	int s1 = 0;
	for(int j = 0 ; j<a.m ; j++)
	s1 = s1 + a.x[1][j];
	return s1;
}
main(){
	int n , m;
	cout<<"\nnhap so dong n: ";cin>>n;
	cout<<"\nnhap so cot b: ";cin>>m;
	matrix a(n,m), b(n,m), c;
	cout<<"\nnhap ma tran A=\n"; a.nhap();
	cout<<"\nnhap ma tran B=\n"; b.nhap();
	cout<<"ma tran A=\n"; a.xuat();
	cout<<"ma tran B=\n"; b.xuat();
		c = cong(a,b);
	cout<<"ma tran C=\n"; c.xuat();
	cout<<"tong cac phan tu nam tren dong 2 ma tran A="<<tong_hang2(a);
	getch();
}


