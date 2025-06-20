//Viet hàm tính S = x^y
#include<stdio.h>
int S(int x, int y){
	int s=1;
	for(int i=1;i<=y;i++){
		s = s*x;
	}
	return s;
}
int main(){
	int x,y;
	printf("nhap x = ");
	scanf("%d",&x);
	do{
		printf("nhap y =");
		scanf("%d",&y);
	}while(y<=0);
	int z = S(x,y);
	printf("Vay x^y =%d",z);
}
