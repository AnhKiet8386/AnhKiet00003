#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i=0;
	
	while(i<n){
		if(i%2!=0){
			printf(" %d ", i);
		}
		i=i+1;
	}
}
