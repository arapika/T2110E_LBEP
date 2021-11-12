#include <stdio.h>
int main(){
	int n;
	do{
        printf("Nhap vao kich thuoc mang: ");
        scanf("%d", &n);
    }while(n <= 0);
    
    int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap vao so thu %d = ",i);
		scanf("%d",&arr[i]);
	}
	int x = 0;
	for(int i = n-1; i < n; i-- ){
		if(arr[i] % 2 == 0){
			x = arr[i];
			break;
		}
	}
	if(x == 0){
		printf("Khong co so CHAN");
	}else{
		printf("So CHAN cuoi cung trong mang la %d",x);
	}
}
