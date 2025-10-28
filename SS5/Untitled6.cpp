#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	char d;
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so B: ");
	scanf("%f", &b);
	printf("Nhap toan tu (+,-,*,/): ");
	scanf(" %c", &d);
	switch(d){
		case '+':
			c=a+b;
			printf("Ket qua: %.2f + %.2f = %.2f \n", a,b,c);
			break;
		case '-':
			c=a-b;
			printf("Ket qua: %.2f - %.2f = %.2f \n", a,b,c);
			break;
		case '*':
			c=a*b;
			printf("Ket qua: %.2f * %.2f = %.2f \n", a,b,c);
			break;
		case '/':
			c=a/b;
			if(b==0)
			   printf("Loi: Ko the chia cho 0 \n");
			else
			   printf("Ket qua: %.2f / %.2f = %.2f \n", a,b,c);
	        break;
	
	default:
		printf("Loi: Toan tu ko hop le");
		break;
	}
	return 0;
}
