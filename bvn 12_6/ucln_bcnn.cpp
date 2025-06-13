//Nhap 2 so a,b. Tìm uoc chung lon nhat và boi chung nho nhat cua a và b
#include<stdio.h>
int main(){
	int a,b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	
	int cnt=1;
	int S0=0;
	int S1=0;
	
	while(cnt<=a && cnt<=b){
		if(a%cnt==0 && b%cnt==0){
			S0=cnt;
		}
		cnt=cnt+1;
	}
	S1=(a*b)/S0;
	printf("UCLN cua a va b la: %d\n", S0);
	printf("BCNN cua a va b la: %d\n", S1);
}
