// thuat toan sap xep selection sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[5] = {5,7,9,10,6};
	for(int i = 0 ; i<5 ; i++){
		cout <<a[i]<<" ";
	}
	for(int i= 0 ; i<5 ; i++){
			int min = i;
			for(int j = i+1; j<5 ; j++){
				if(a[j]<a[min])
				min = j;
			}
			if(min != i){
				int temp  = a[i];
				a[i] = a[min];
				a[min] = temp ;
						 		}	
	}
	for(int i = 0 ; i<5 ; i++){
		cout <<a[i]<<" ";
	}
	
	return 0;
}