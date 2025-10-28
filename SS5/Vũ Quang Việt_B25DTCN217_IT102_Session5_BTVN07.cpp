#include <stdio.h>
int main(){
	char c;
	printf("Nhap 1 ky tu: ");
	scanf("%c", &c);
	if(c>='a' && c<='z'){
	    c=c-32;
	    printf("Chu hoa tuong ung: %c", c);
	    }
	else if(c>='A' && c<='Z'){
	    c=c+32;
	    printf("Chu thuong tuong ung: %c", c);
	    }
	else{
	    printf("Ko phai chu cai.");
	    }
	return 0;
}

