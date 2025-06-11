#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i=1;
	int S=0;
	while(i<n){
		if(n%i==0){
			S=S+i;
		}
		i=i+1;
	}
	if(S==n){
		printf("day la so hoan hao %d ",n);
	}else{
		printf("day k la so hoan hao %d",n);
	}
}
