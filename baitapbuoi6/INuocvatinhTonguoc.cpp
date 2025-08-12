#include<stdio.h>
int main(){
	
	int n;
	
	do{
	printf("nhap n\n");
	scanf("%d",&n);
    }while(n<=0);
    
	int uoc=0;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d la uoc\n",i);
			uoc+=i;
	}
	}printf("tong uoc cua %d la %d\n",n,uoc);
}
