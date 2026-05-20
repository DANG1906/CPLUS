#include<stdio.h>
#include<math.h>
int main(){
	int a , b , c;
	printf("nhap a:");scanf("%d",&a);
	printf("nhap b:");scanf("%d",&a);
	printf("nhap c:");scanf("%d",&c);
	int S = (a * (b+c)) + (b * (a+c)) ;
	printf("gia tri cua bieu thuc: %d",S);
	
}