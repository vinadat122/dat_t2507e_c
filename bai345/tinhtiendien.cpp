#include<stdio.h>
int main(){
	
	int kwh;
	printf("nhap so kwh tieu thu=\n");
	scanf("%d",&kwh);
	
	if(kwh<=0){
		printf("khong phai dong tien dien!");
	}else{
		if(kwh<=50){
			int tien;
			tien= kwh*1678;
			printf("so tien dien phai dong la %d d",tien);
		}else{
			if(kwh<=100){
				int a;
				a=kwh-50;
				int tien;
				tien= a*1734 +50*1678;
				printf("so tien dien phai dong la %d d",tien);
			}else{
				if(kwh<=200){
					int b;
					b= kwh-100;
					int tien;
					tien= b*2014 +50*1734 +50*1678;
					printf("so tien dien phai dong la %d d",tien);
				}else{
					int c;
					c= kwh-200;
					int tien;
					tien= c*2536 +100*2014 +50*1734 +50*1678;
					printf("so tien dien phai dong la %d d",tien);
				}
			}
		}
	}
	
	
}
