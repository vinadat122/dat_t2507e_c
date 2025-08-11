#include <stdio.h>
int main(){
	
	int n,i;
	printf("nhap n\n");
	scanf("%d",&n);
	
	if(n%2==0){
		i=n-1;
	}else{
		i=n-2;
	} while(i>0){
		printf("%d\n",i);
		i-=2;
	}
}
