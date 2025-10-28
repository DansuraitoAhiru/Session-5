#include <stdio.h>
#include <math.h>
int main(){
	float phuPhi, tienBacthang, TienDien;
	int kwh, loaiHo;
	float phuPhi1=0.05, phuPhi2=0.1, phuPhi3=0.08;
	float tienBac1=1.5, tienBac2=2.0, tienBac3=2.5, tienBac4=3.0;
	printf("Nhap so dien tieu thu: ");
	scanf("%d", &kwh);
	printf("Nhap loai ho tieu dung: ");
	scanf("%d", &loaiHo);
	if(kwh<0){
	    printf("So dien tieu thu ko the nho hon 0");
	    return 0;
	}
	
	if(kwh<=50)
	    tienBacthang=kwh*tienBac1;
	else if(kwh<=100)
	    tienBacthang=50*tienBac1 + (kwh-50)*tienBac2;
	else if(kwh<=200)
	    tienBacthang=50*tienBac1+50*tienBac2 + (kwh-100)*tienBac3;
	else 
	    tienBacthang=50*tienBac1+50*tienBac2+100*tienBac3+(kwh-200)*tienBac4;
	    
	if(loaiHo<1 || loaiHo>3){
	   printf("Loai ho tieu ko hop le");
	   return 0;
	}
	
	if(loaiHo==1)
	   phuPhi=tienBacthang*phuPhi1;
	else if(loaiHo==2)
	   phuPhi=tienBacthang*phuPhi2;
	else if(loaiHo==3)
	   phuPhi=tienBacthang*phuPhi3;
	   
	TienDien=tienBacthang+phuPhi;
	printf("Tien dien = %.3f VND", TienDien);
	return 0;
}


