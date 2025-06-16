//Nhap mang n so nguyên, tìm so luong các so duong liên tiep nhieu nhat
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
	
	int max=0;
	int so_duong_ltiep=0;
	
	for(int i=0;i<size;i++){
		if(player[i]>0){
			so_duong_ltiep++;
		}else{
			if(so_duong_ltiep > max){
				max=so_duong_ltiep;
			}
			so_duong_ltiep=0;
		}
	}
	if(so_duong_ltiep>max){
		max=so_duong_ltiep;
	}
	printf("so luong cac so duong lien tiep nhieu nhat la: %d",max);
}
