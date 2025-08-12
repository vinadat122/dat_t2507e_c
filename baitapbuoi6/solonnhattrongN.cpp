#include <stdio.h>
int main(){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	
	int r,x=0;

	
	for(;n>0;n/=10){
		r=n%10;
		if(r>=x){
			x=r;
		}
	}printf("%d",x);
}
