#include <stdio.h>
int main(){
	int arr[100],n,currentLength,index;
	for(;;){
		printf("So phan tu muon nhap: ");
		scanf("%d",&n);
		if(0<n&&n<101){
			currentLength=n;
			break;
		}
	}
	printf("Nhap cac phan tu:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(;;){
		printf("Nhap vi tri can xoa: ");
		scanf("%d",&index);
		if(0<index&&index<n){
				break;
		}
	}
	for(int i=index-1;i<currentLength;i++){
					arr[i]=arr[i+1];
				}
				currentLength--;
	for(int i=0;i<currentLength;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
