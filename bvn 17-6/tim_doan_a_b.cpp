//Cho mang  n so nguyên, hãy tìm doan [a, b] trên truc so nguyên sao cho doan này chua tat ca các giá tri trong mang
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
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if( arr[j] > arr[j+1] ){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	int a = arr[0];
	int b = arr[n-1];
	printf("doan [a,b] can tim chua tat ca gia tri trong mang la: [%d,%d]",a,b);
}
