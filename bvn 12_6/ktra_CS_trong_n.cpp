//H�y kiem tra so nguy�n duong n c� to�n chu so le hay kh�ng
#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int s=1;
	
	while(n>0){
		i=n%10;
		s=i;
		if(s%2==0){
			s=0;
			break;
		}
		n=n/10;
	}
	if(s==1){
		printf("chu so cua n toan la so le");
	}else{
		printf("chu so cua n k hoan toan la so le");
	}
}
