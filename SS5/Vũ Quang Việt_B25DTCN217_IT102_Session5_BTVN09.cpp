#include <stdio.h>
#include <math.h>
int main(){
	float a,d;
	int b,c;
	float phuCap1=500.000, phuCap2=1000.000, phuCap3=2000.000;
	float thuong=200.000;
	printf("Nhap he so luong: ");
	scanf("%f", &a);
	printf("Nhap so ngay cong: ");
	scanf("%d", &b);
	printf("Nhap chuc vu: ");
	scanf("%d", &c);
	
	if(b<1 || b>31){
	   printf("Ngay cong ko hop le");
	   return 0;
	}
	
	if(c<1 ||c>3){
		printf("Chuc vu ko hop le");
	    return 0;
	}
	
	if(c==1 && b<27)
	   d=b*160.000*a+phuCap1;
	else if(c==1 && b>26)
	   d=b*160.000*a+phuCap1+thuong*(b-26);
	else if(c==2 && b<27)
	   d=b*160000*a+phuCap2;
	else if(c==2 && b>26)
	   d=b*160000*a+phuCap2+thuong*(b-26);
	else if(c==3 && b<27)
	   d=b*160000*a+phuCap3;
	else
	   d=b*160000*a+phuCap3+thuong*(b-26);
	printf("Luong= %.2f VND", d);
	return 0;
}
