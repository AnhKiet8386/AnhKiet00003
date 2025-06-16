//Nhap mang n so nguyên, tìm so le cuoi cùng cua mang
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
	
	// tim so le cuoi cung trong mang
		int so_le_cuoi=player[0];
		for(int i=0;i<size;i++){
			if(player[i]%2!=0){
				so_le_cuoi=player[i];
			}
		}
		printf("so le cuoi cung trong mang la: %d",so_le_cuoi);
}
