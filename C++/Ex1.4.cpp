 #include<iostream>
 
 using namespace std;
 
 int main(){
 	int a, b;
 	cout<<"nhap vao hai so \n";
 	cout<<"a = ";cin>>a;
 	cout<<"b = ";cin>>b;
 	if(a>b){
 		cout<<""<<a<<">"<<""<<b<<endl;
	 }
	 else if(a<b){
	 	cout<<""<<a<<"<"<<""<<b<<endl;
	 }
	 else if(a==b){
	 	cout <<""<<a<<"="<<""<<b<<endl;
	 }
	 else{cout<<"moi nhap lai chu so: "<<endl;
	 }
 	
 }