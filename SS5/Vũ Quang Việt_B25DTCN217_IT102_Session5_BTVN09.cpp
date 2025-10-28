#include <stdio.h>
#include <math.h>
int main(){
	float a,d;
	int b,c;
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
	   d=b*160000*a+500000;
	else if(c==1 && b>26)
	   d=b*160000*a+500000+200000*(b-26);
	else if(c==2 && b<27)
	   d=b*160000*a+1000000;
	else if(c==2 && b>26)
	   d=b*160000*a+1000000+200000*(b-26);
	else if(c==3 && b<27)
	   d=b*160000*a+2000000;
	else
	   d=b*160000*a+2000000+200000*(b-26);
	printf("Luong= %.2f VND", d);
	return 0;
}
