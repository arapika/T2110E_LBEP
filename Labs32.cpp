#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	double c,d;
	printf("nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("nhap vao so thu hai: ");
	scanf("%d",&b);
	c=(double)a/b;
	d=a*b;
	if(a>=b){
		printf("%.4lf",c);
	}else{
		printf("%lf",d);
	}
}
