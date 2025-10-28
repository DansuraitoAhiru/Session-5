#include <stdio.h>
int main(){
	int n;
	printf("Nhap diem: ");
	scanf("%d", &n);
	if(n<0)
	   printf("Diem ko dung");
	else if(n<5)
	   printf("Hoc luc yeu");
	else if(n<6.5)
	   printf("Hoc luc trung binh");
	else if(n<8)
	   printf("Hoc luc kha");
	else if(n<=10)
	   printf("Hoc luc gioi");
	else
	   printf("Diem ko dung");
	return 0;
}
	
