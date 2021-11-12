#include <stdio.h>
float average(int s[], int n){
	float sum = 0;
	int count = 0;
	float average = 0;
	for(int i=0; i<n; i++){
		sum += s[i];
		count++;
	}
	average = sum/count;
	return average;
}
int main(){
	int n;
	printf("Nhap vao kich thuoc mang: ");
	scanf("%d",&n);
	int s[n];
	for(int i=0; i<n; i++){
		printf("Nhap vao so thu %d: ",i);
		scanf("%d",&s[i]);
	}
	printf("So trung binh cua mang la: %.2f",average(s,n));
}

