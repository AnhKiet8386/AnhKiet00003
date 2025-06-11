#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i = n - 1;
	while(i>0){
		if(i%6==0){
			printf("so can tim la: %d",i);
		}
		i=i-1;
	}
}

