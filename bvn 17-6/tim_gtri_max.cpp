//Nhap vào mang n so nguyên và 1 so nguyên x. Hãy tìm giá tri trong mang so xa giá tri x nhat
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
	
	int khoang_cach,khoang_cach_max,gtri_max;
	
	for(int i=0;i<n;i++){
		if(arr[i] - x >=0){
			khoang_cach = arr[i] - x;
		}else{
			khoang_cach = 0 - (arr[i] - x);
		}
		if(khoang_cach > khoang_cach_max){
			khoang_cach_max = khoang_cach;
			gtri_max = arr[i];
		}
	}
	printf("gia tri trong mang so xa voi x nhat la: %d",gtri_max);
}

