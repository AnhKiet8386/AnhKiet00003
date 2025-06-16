//Tính trung bình cong các so le trong mang n so
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
	int s=0;// tong cac so le
	int c=0;// so luong cac so le
	
	for(int i=0;i<size;i++){
		if(player[i]%2==1){
			s=s+player[i];
			c++;
		}
	}
	if(c>0){
		float tbc = (float)s/c;
		printf("TBC ca so le la: %f",tbcs=s+player[i]);
	}else{
		printf("mang k co so le ");
	}
}
