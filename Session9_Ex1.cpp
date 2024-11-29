#include<stdio.h>
int main(){
	int arr[100],n,currentLength,index,addIndex;
	printf("Nhap so phan tu muon nhap: ");
	for(;;){
		scanf("%d",&n);
		if(0<n&&n<101){
			currentLength = n;
			break;
		}else{
			printf("Vui long nhap lai: ");
		}
	}
	printf("Nhap tung phan tu vao mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Them phan tu vao mang: ");
	scanf("%d",&index);
	printf("Vi tri can them vao: ");
	for(;;){
		scanf("%d",&addIndex);
		if(addIndex>0&&addIndex<101){
			if(addIndex>=currentLength){
				currentLength=addIndex;
				arr[addIndex]=index;
			}else if(addIndex<currentLength){
				currentLength ++;
				for(int i=currentLength;i>addIndex-1;i--){
					arr[i]=arr[i-1];
				}
				arr[addIndex-1]=index;
			}
			break;
		}else{
			printf("Vui long nhap lai: ");
		}
	}
	for(int i=0;i<currentLength;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
