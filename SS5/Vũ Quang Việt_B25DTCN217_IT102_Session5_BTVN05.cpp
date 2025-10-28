#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	const int c=20000;
	printf("Nhap Tuoi: ");
	scanf("%d", &a);
	if(a<0 || a>150){
	   printf("Tuoi ko hop le");
	   return 1;
	}
	
	if(a<6)
	   b=c*0;
	else if(a<19)
	   b=c*0.5;
	else if(a<61)
	   b=c*1;
	else
	   b=c*0.7;
	printf("So tien ve: %d VND", b);
	return 0;
}
