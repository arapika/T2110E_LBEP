#include <stdio.h>
int main(){
	int n;
	printf("nhap vao mot so: ");
	scanf("%d",&n);
	if(n>=2 && n<=7){
		printf("Day la thu: %d",n);
	}else{
		if(n==8){
			printf("Day la Chu Nhat");
		}else{
			printf("Khong phai ngay trong tuan");
		}
	}
}
