#include<stdio.h>
#include<math.h>
int main(){
	
	float a;
	printf("nhap he so bac 2 a=\n");
	scanf("%f",&a);
	
	float b;
	printf("nhap he so bac 1 b=\n");
	scanf("%f",&b);
	
	float c;
	printf("nhap hang so c=\n");
	scanf("%f",&c);
	
	float x1,delta,x2,x3,x4;
	
	if(a==0){
		
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			x1=-c/b;
			printf("phuong trinh co 1 nghiem la x=%f",x1);
		}
	}else{
		delta= b*b - 4*a*c;
		if(delta<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(delta==0){
				x2=-b/2/a;
				printf("phuong trinh co nghiem kep x1=x2=%f",x2);
			}else{
				x3= (-b+sqrt(delta))/2/a;
				x4= (-b-sqrt(delta))/2/a;
				printf("phuong trinh co 2 nghiem la x1=%f,x2=%f",x3,x4);
			}
		}
	}
}
