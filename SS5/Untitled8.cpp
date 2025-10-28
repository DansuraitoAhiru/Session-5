#include <stdio.h>
#include <math.h>
int main(){
	float n,m;
	printf("Nhap so met khoi nuoc tieu thu: ");
	scanf("%f", &n);
	if(n<0){
	   printf("So ko hop le");
	   return 0;
	}
	if(n<11)
	  m=n*6000;
	else if(n<21)
	  m=10*6000+(n-10)*7000;
	else if(n<31)
	  m=10*6000+10*7000+(n-20)*8500;
	else
	  m=10*6000+10*7000+10*8500+(n-30)*10000;
	printf("Tong tien= %.2f VND", m);
	return 0;
}

