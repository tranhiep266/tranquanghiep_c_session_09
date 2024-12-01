#include <stdio.h>
int main(){
	int arr[100],menu,length=0,add,edit,newedit,posi,currentLength;
	for(;;){
		printf("\nMENU\n");
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&menu);
		printf("\n");
		if(menu==1){
			for(;;){
				printf("Chieu dai mang: ");
			    scanf("%d",&length);
			    if(0<length&&length<101){
			    	printf("Nhap cac phan tu:\n");
			    	for(int i=0;i<length;i++){
			        scanf("%d",&arr[i]);
		            }
		        currentLength=length;
		        break;
				}
			}
			printf("\n");
		    
		}else if(menu==2){
			for(int i=0;i<currentLength;i++){
				printf("%4d",arr[i]);
			}
			printf("\n");
			
		}else if(menu==3){
			printf("Them phan tu: ");
                scanf("%d",&add);
                arr[currentLength]=add;
                currentLength++;
			for(int i=0;i<currentLength;i++){
			    printf("%4d",arr[i]);
		    }
		    printf("\n");
		
		}else if(menu==4){
			for(;;){
				printf("Sua phan tu thu: ");
			    scanf("%d",&edit);
			    if(edit>0&&edit<currentLength+1){
			    	printf("Nhap gia tri moi: ");
			    	scanf("%d",&newedit);
			    	arr[edit-1]=newedit;
			    	for(int i=0;i<currentLength;i++){
			            printf("%4d",arr[i]);
		            }
			    	break;
				}
			}
			printf("\n");
			
		}else if(menu==5){
			for(;;){
				printf("Xoa phan tu thu: ");
			    scanf("%d",&posi);
			    if(edit>0&&edit<7){
			    	for(int i=posi-1;i<currentLength;i++){
					arr[i]=arr[i+1];
				}
				currentLength--;
				for(int i=0;i<currentLength;i++){
			        printf("%4d",arr[i]);
		        }
				break;
				}
			}
			printf("\n");
			
		}else if(menu==6){
			break;
		}
	}
	return 0;
}
