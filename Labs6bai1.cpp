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
	int total = 0; 
    int tbc, count = 0;
    for(int i=0; i<n; i++){
    	if(arr[i] % 2 != 0){
    		total += arr[i];
    		count++;
		}
	}
	tbc = total/count;
	printf("Trung binh cong cac so le: %d",tbc);
}
