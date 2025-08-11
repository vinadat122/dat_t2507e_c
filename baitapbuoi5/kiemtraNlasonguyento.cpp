#include <stdio.h>
int main (){
	
	int n;
	printf("nhap so nguyen n\n");
	scanf("%d",&n);
	
	int i=1;
	int u=0;
	
	if(n<2){
		printf(" %d khong phai so nguyen to\n",n);
	}else{
		while(i<=n){
		if(n%i==0){
			u++;
		}
		i++;
	}if(u<=2){
		printf(" %d la so nguyen to\n",n);
	}else{
		printf(" %d khong phai so nguyen to\n",n);
	}
}
}
