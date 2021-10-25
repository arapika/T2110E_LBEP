#include<stdio.h>
#include<math.h>
int main(){
	double a,b,n;
	printf("so tien gui ngan hang: ");
	scanf("%lf",&a);
	printf("so nam gui tien: ");
	scanf("%lf",&n);
	b=a*pow(1+0.08,n);
	printf("so tien nhan duoc sau %.1lf nam la:%.5lf",n,b);
}

