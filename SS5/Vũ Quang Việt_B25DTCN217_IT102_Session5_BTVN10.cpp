#include <stdio.h>
#include <math.h>
int main(){
	float phuPhi, tienBacthang, TienDien;
	int kwh, loaiHo;
	printf("Nhap so dien tieu thu: ");
	scanf("%d", &kwh);
	printf("Nhap loai ho tieu dung: ");
	scanf("%d", &loaiHo);
	
	if(loaiHo<1 || loaiHo>3){
	   printf("Loai ho tieu ko hop le");
	   return 0;
	}
	
	if(loaiHo==1)
	   phuPhi=tienBacthang*0.05;
	else if(loaiHo==2)
	   phuPhi=tienBacthang*0.1;
	else if(loaiHo==3)
	   phuPhi=tienBacthang*0.08;
	   
	if(kwh<0){
	    printf("So dien tieu thu ko the nho hon 0");
	    return 0;
	}
	
	if(kwh<=50)
	    tienBacthang=kwh*1500;
	else if(kwh<=100)
	    tienBacthang=50*1500 + (kwh-50)*2000;
	else if(kwh<=200)
	    tienBacthang=50*1500+50*2000 + (kwh-100)*2500;
	else 
	    tienBacthang=50*1500+50*2000+100*2500+(kwh-200)*3000;
	
	TienDien=tienBacthang+phuPhi;
	printf("Tien dien = %.2f VND", TienDien);
	return 0;
}
	
