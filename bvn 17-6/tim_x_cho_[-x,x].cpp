//Cho mang n so nguyên, hãy tìm giá tri x sao cho doan [-x, x] trên truc so nguyên chua tat ca các giá tri trong mang
#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap mang n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so luong phan tu cua mang: ");
		scanf("%d",&arr[i]);
	}
	
	int x=0,max;
	
	for(int i=0;i<n;i++){
		if(arr[i] >= 0){
			max = arr[i];
		}else{
			max = 0 - arr[i];
		}
		if(max > x){
			x = max;
		}
	}
	printf("gia tri x can tim sao cho doan [-x,x] chua tat ca cac gia tri mang la:%d",x);
}
