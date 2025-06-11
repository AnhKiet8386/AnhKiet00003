#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i=0;
	
	while(n!=0){
		int S = n % 10;
		i = i * 10 + S;
		n = n / 10;
	}
	printf("so dao nguoc cua n la: %d",i);
}
