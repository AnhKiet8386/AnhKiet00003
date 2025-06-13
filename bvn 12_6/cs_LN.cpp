//Tìm chu so lon nhat cua so nguyên duong n
#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int S=0;
	
	while(n>0){
		i=n%10;
		if(i>S){
			S=i;
		}
		n=n/10;
	}
	printf("so lon nhat cua n la: %d",S);
}
