#include <stdio.h>
int main (){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	
	int x1=0, x2=1, x3=x1+x2;
	
	while(x3<n){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}printf("%d",x2);
	
}
