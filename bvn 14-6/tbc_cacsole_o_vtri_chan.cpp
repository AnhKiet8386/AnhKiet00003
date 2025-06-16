//Tính trung bình cong các so le o vi trí chan trong mang n so
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
	
	int s=0;// s la tong so le
	int c=0;// c la so luong cac so le
	
	for(int i=0;i<size;i++){
		if(player[i]%2==1 && i%2==0){ // i la vi tri cua player[i]
			s=s+player[i];
			c++;
		}
	}
	if(c>0){
		float tbc =(float)s/c;
		printf("TBC cac so le o vi tri chan %f",tbc);
	}else{
		printf("mang k co so le nao o vi tri chan");
	}
}

