//Viet các hàm thuc hien tinh tong các chu so cua 1 so nguyên n
#include<stdio.h>
int tongchuso(int n){
	int S = 0;
	if(n<0){
		n = -n;
	}
	while(n>0){
		int i = n % 10;
		S = S + i;
		n = n / 10;
	}
	return S;
}
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int tong = tongchuso(n);
	printf("tong cac chu so cua n la:%d",tong);
} 

