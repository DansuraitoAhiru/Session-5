#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	if(a>b)
	   printf("So lon hon la: %d", a);
	else if(b>a)
	   printf("So lon hon la: %d", b);
	else 
	   printf("Hai so bang nhau");
	return 0;
}
