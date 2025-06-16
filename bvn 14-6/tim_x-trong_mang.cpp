//Nhap vào 1 mang n so nguyên, sau dó nhap 1 so x. Tìm xem có x trong mang không
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
	
	int x;
	do{
		printf("nhap x = ");
		scanf("%d",&x);	
	}while(x<=0);
	
	int s=0;// s la minh chung cho x co trong mang
	
	for(int i=0;i<size;i++){
		if(player[i]==x){
			s=1;
			break;
		}
	}
	if(s==1){
		printf("x co trong mang");
	}else{
		printf("x k co trong mang");
	}
}
