//Nhap mang n so nguyên, tìm xem chuoi so duong mà có tong lon nhat là bao nhiêu
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
	
	int chuoi_so_duong=0;
	int tong_lon_nhat=0;
	
	for(int i=0;i<size;i++){
		if(player[i]>0){
			tong_lon_nhat = tong_lon_nhat + player[i];	
		}else{
			if(tong_lon_nhat > chuoi_so_duong){
				chuoi_so_duong=tong_lon_nhat;
			}
			tong_lon_nhat=0;
		}
	}
	if(tong_lon_nhat > chuoi_so_duong){
		chuoi_so_duong=tong_lon_nhat;
	}
	printf("chuoi so duong co tong lon nhat la: %d",chuoi_so_duong);
}
