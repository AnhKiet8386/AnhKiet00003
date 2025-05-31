# include<stdio.h>

int main(){
	float a;
	printf("nhap a = ");
	scanf("%f",&a);
	
	float b;
	printf("nhap b = ");
	scanf("%f",&b);
	
	float c;
	printf("nhap c = ");
	scanf("%f",&c);
	
	if(a+b>c){
		if(b+c>a){
			if(a+c>b){
				printf("day la tam giac");
			}else{
				printf("day k la tam giac");
			}
		}else{
			printf("day k la tam giac");
		}
	}else{
		printf("day k la tam giac");
	}
}
	
