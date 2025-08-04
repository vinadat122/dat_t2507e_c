#include<stdio.h>
int main(){
	
   float a;
    printf("nhap a=\n");
    scanf("%f",&a);
   
   float b;
   	printf("nhap b=\n");
   	scanf("%f",&b);
   	
   float c;
    printf("nhap c=\n");
    scanf("%f",&c);
    
   
   if(a==0){
   	  printf("khong the tao tam giac");
   }else{
   	if(b==0){
   		printf("khong the tao tam giac");
	   }else{
	   	if(c==0){
	   		printf("khong the tao tam giac");
		   }else{
		
	
		   	if(a+b<=c){
		   		printf("khong the tao tam giac");
		   	
			   }else{
			   	
			   	if(a+c<=b){
			   		printf("khong the tao tam giac");
				   }else{
				   	
				   	if(b+c<=a){
				   		printf("khong the tao tam giac");
					   }else{
					   	printf("co the tao tam giac");
				
					   }
				   }
			   }
		   }
	   }
}
   
}
