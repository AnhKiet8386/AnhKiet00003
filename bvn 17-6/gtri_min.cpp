//Nhap v�o  mang n so nguy�n v� 1 so nguy�n x. H�y t�m gi� tri trong mang so gan gi� tri x nhat
#include<stdio.h>
int main(){
	int n;
	do{
		printf(" nhap mang n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so phan tu cua mang: ");
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	
	int khoang_cach,khoang_cach_min,gtri_min;
	
	if(arr[0] - x >= 0){
		khoang_cach_min = arr[0] - x;
	}else{
		khoang_cach_min = 0 - (arr[0] - x);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i] - x >=0){
			khoang_cach = arr[i] - x;
		}else{
			khoang_cach = 0 - (arr[i] - x);
		}
		if(khoang_cach < khoang_cach_min){
			khoang_cach_min = khoang_cach;
			gtri_min = arr[i];
		}
	}
	printf("gia tri trong mang so gan voi x nhat la: %d",gtri_min);
}

