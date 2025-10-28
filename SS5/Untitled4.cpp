#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("Nhap muc thu nhap: ");
	scanf("%f", &a);
	if(a<=0){
	   printf("Muc thu nhap ko hop le \n");
	   return 1;
	}
	if(a<=5)
	   b=a*0.05;
	else if(a<=10)
	   b=a*0.1;
	else
	   b=a*0.15;
	   
	printf("Thue thu nhap phai dong: %.2f trieu dong", b);
	return 0;
}
	
