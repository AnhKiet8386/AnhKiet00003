//Cho so nguyên duong n. Hãy tìm chu so dau tiên cua n
#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n = ");
	scanf("%d",&n);
	
	while(n>0){
		i=n%10;
		n=n/10;
	}
	printf(" chu so dau tien cua n la: %d",i);
}
