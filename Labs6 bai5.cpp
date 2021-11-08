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
	int x = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i]>0){
			x = arr[i];
			break; 
		}
	}
	int m = arr[1];
	for(int i = 0; i < n; i++){
		if(m<arr[i] && arr[i]<x){
			m = arr[i];
		}
	}
	printf("So duong nho nhat trong mang la %d",m);
}
