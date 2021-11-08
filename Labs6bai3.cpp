#include <stdio.h>
int main(){
	int n;
	do{
        printf("Nhap vao so n: ");
        scanf("%d", &n);
    }while(n <= 0);
    
    int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap vao so thu %d = ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d",&x);
	int flag = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x);
		printf("%d nam trong danh sach vua nhap", x);
		flag = 1;
		break;
	}
	if(flag == 0){
	printf("So %d khong ton tai trong danh sach",x);
	}
}
