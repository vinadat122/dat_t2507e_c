#include <stdio.h>
int main (){
	
	int a,i=1,u=0;
	printf("nhap so \n");
	scanf("%d",&a);
	
	while(i<a){
		if(a%i==0){
			u+=i;
		}
		i++;
	}if(u==a){
		printf("%d la so hoan hao\n",a);
	}else{
		printf("%d khong phai so hoan hao\n",a);
	}
}
