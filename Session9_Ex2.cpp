#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5},index,addIndex;
	printf("Nhap gia tri moi: ");
	scanf("%d",&index);
	for(;;){
		printf("Vi tri can sua: ");
	    scanf("%d",&addIndex);
		if(addIndex<5&&addIndex>0){
			arr[addIndex-1]=index;
			break;
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
