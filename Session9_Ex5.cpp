#include <stdio.h>
int main(){
	int arr[100],menu=0,length=0,max,min,currentLength,sumEven=0;
	for(;;){
		printf("\nMENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan ly\n");
		printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
		printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
		printf("7. Them mot phan tu vao vi tri chi dinh\n");
		printf("8. Thoat\n");
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
		}
		
		else if(menu==2){
			printf("Cac phan tu dang quan ly:\n");
			for(int i=0;i<currentLength;i++){
				printf("%4d",arr[i]);
			}
			printf("\n");
		}
		
		else if(menu==3){
			printf("Cac so chan trong mang:\n");
			for(int i=0;i<currentLength;i++){
				if(arr[i]%2==0){
					printf("%4d",arr[i]);
					sumEven+=arr[i];
				}
			}
			printf("\n");
			printf("Tong cac so chan:%d",sumEven);
			printf("\n");
		}
		
		else if(menu==4){
			max=arr[0];
			min=arr[0];
			for(int i=0;i<currentLength;i++){
				if(max<arr[i]){
					max=arr[i];
				}
				if(min>arr[i]){
					min=arr[i];
				}
			}
			printf("Gia tri lon nhat trong mang: %d\n",max);
			printf("Gia tri nho nhat trong mang: %d\n",min);
			printf("\n");
		}
		
		else if(menu==5){
			int sum=0;
			printf("Cac phan tu la so nguyen to trong mang:\n");
			for(int i=0;i<currentLength;i++){
				int temp=1;
				if(arr[i]<2){
					temp=0;
				}else{
					for(int j=2;j*j<=arr[i];j++){
					   if(arr[i]%j==0){
						temp=0;
						break;
					    }
				    }
				}
				if(temp){
					printf("%4d",arr[i]);
					sum+=arr[i];
				}
			}
			printf("\n");
			printf("Tong cac so nguyen to trong mang: %d\n",sum);
		}
		
		else if(menu==6){
			int find,count=0;
			printf("Nhap so can thong ke: ");
			scanf("%d",&find);
			for(int i=0;i<currentLength;i++){
				if(arr[i]==find){
					count++;
				}
			}
			printf("So can tim co %d phan tu",count);
			printf("\n");
		}
		
		else if(menu==7){
			int add,posi;
			for(;;){
				printf("Them phan tu: ");
			    scanf("%d",&add);
			    printf("Vao vi tri: ");
		    	scanf("%d",&posi);
		    	if(posi>=0&&posi<=currentLength){
                   break;
                }
			}
			for(int i=currentLength;i>posi-1;i--){
                        arr[i]=arr[i-1];
            }
			arr[posi-1]=add;
            currentLength++;
            for(int i=0;i<currentLength;i++){
            	printf("%4d",arr[i]);
			}
		}
		
		else if(menu==8){
			printf("Thoat");
			break;
		}
		
	}
	return 0;
}
