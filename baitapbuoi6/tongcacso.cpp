#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	n=abs(n);
	
	int r;
	
	int sum=0;
	
	for(;n>0;n/=10){
		r=n%10;
		sum+=r;
	}printf("tong la %d\n",sum);
}
