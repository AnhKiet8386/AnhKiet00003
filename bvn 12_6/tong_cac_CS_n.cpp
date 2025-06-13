//Tinh tong các chu so cua 1 so nguyên n
#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int S=0;
	
	while(n>0){
		i=n%10;
		S=S+i;
		n=n/10;
	}
	printf("tong cac chu so cua n la: %d",S);
}
