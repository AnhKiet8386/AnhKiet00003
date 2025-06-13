//Nhap 1 so nguyen n, tìm các uoc và tính tong uoc cua n
#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int cnt=1;
	int S=0;
	
	while(cnt<=n){
		if(n%cnt == 0){
			S=S+cnt;
		}
		cnt=cnt+1;
	}
	printf("tong cac uoc cua n la: %d",S);
}
