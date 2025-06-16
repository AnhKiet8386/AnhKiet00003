//Nhap mang n so nguyên, tìm so duong nho nhat
#include<stdio.h>
int main(){
	int size;
	do{
		printf("nhap vao so luong phan tu cua mang: ");
		scanf("%d",&size);	
	}while(size<=0);
	
	int player[size];
	
	for(int i=0;i<size;i++){
		printf("nhap phan tu vao mang:");
		scanf("%d",&player[i]);
	}
	
	int so_duong_nn=player[0];
	for(int i=0;i<size;i++){
		if(so_duong_nn > player[i]){
			so_duong_nn = player[i];
		}
	}
	printf("so duong nho nhat cua mang la: %d",so_duong_nn);
}
