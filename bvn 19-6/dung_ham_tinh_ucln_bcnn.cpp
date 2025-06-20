#include<stdio.h>
int ucln(int a, int b){
	int uc=1;
	int UCLN =0;
	while(uc<=a && uc<=b){
		if(a%uc==0 && b%uc==0){
			UCLN = uc;
		}
		uc++;
	}
	return UCLN;
}
	
int bcnn(int a, int b){
	int BCNN = (a*b)/ucln(a,b);
	return BCNN;
}

int main(){
	int a,b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	
	int UCLN,BCNN;
	UCLN = ucln(a,b);
	BCNN = bcnn(a,b);
	printf("UCLN va BCNN cua a va b la:%d,%d",UCLN,BCNN);
}
