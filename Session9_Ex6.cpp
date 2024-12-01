#include <stdio.h>
int main(){
	int rows,cols,arr[100][100],menu;
	for(;;){
	    printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        if(menu==1){
        	printf("Nhap kich co cua hang: ");
        	scanf("%d",&rows);
        	printf("Nhap kich co cua cot: ");
        	scanf("%d",&cols);
        	printf("Nhap cac phan tu:\n");
        	for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("\n");
		}
		
		else if(menu==2){
			printf("Cac phan tu cua mang:\n");
			for(int i=0;i<rows; i++){
                for(int j=0;j<cols;j++){
                    printf("%4d",arr[i][j]);
                }
            printf("\n");
            }
            printf("\n");
		}
		
		else if(menu==3){
			int sumOdd=0;
			printf("Cac phan tu la le:\n");
			for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    if(arr[i][j]%2!=0){
                        printf("%4d",arr[i][j]);
                        sumOdd+=arr[i][j];
                    }
                }
            }
            printf("\n");
            printf("Tong cac so le la: %d\n",sumOdd);
		}
		
		else if(menu==4){
			int product=1;
			for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    if(i==0||i==rows-1||j==0||j==cols-1){
                        printf("%4d",arr[i][j]);
                        product*=arr[i][j];
                    }
                }
            }
            printf("\n");
            printf("Tich cac phan tu tren duong bien la: %d\n",product);
            printf("\n");
		}
		
		else if(menu==5){
			printf("Cac phan tu nam tren duong cheo chinh:\n");
            for(int i=0;i<rows&&i<cols;i++){
                printf("%4d", arr[i][i]);
            }
            printf("\n");
		}
		
		else if(menu==6){
			printf("Cac phan tu nam tren duong cheo phu:\n");
            for(int i=0;i<rows&&i<cols;i++) {
                printf("%4d",arr[i][cols-i-1]);
            }
            printf("\n");
		}
		
		else if(menu==7){
			int maxSum=0,maxRows=0;
            for(int i=0;i<rows;i++){
                int rowsSum=0;
                for(int j=0;j<cols;j++){
                    rowsSum+=arr[i][j];
                }
                if(rowsSum>maxSum){
                    maxSum=rowsSum;
                    maxRows=i;
                }
            }
            printf("Dong co tong gia tri cac phan tu lon nhat: dong %d\n",maxRows+1);
            for(int j=0;j<cols;j++) {
                printf("%4d",arr[maxRows][j]);
            }
            printf("\n");
		}
		
		else if(menu==8){
			printf("Thoat");
			break;
		}
	}
	return 0;
}
