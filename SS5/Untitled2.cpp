#include <stdio.h>
#include <math.h>
int main(){
	float a,b,x;
	printf("Nhapo so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	if(a==0)
	  if(b==0)
	     printf("Phuong trinh co vo so nghiem \n");
	  else
	     printf("Phuong trinh vo nghiem \n");
	else
	   x=-b/a;
	   printf("Phuong trinh co duy nhat 1 nghiem duy nhat x= %.2f", x);
	return 0;
}
