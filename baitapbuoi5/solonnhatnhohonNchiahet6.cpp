#include <stdio.h>
int main(){
	
	int n,x,r;
	printf("nhap n\n");
	scanf("%d",&n);
	
	r=n%6;
	x=n-r;
	printf("%d",x);
}
