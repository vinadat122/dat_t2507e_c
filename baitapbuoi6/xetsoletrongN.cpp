#include <stdio.h>
int main(){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	
	int r,chan=0;

	
	for(;n>0;n/=10){
		r=n%10;
		if(r%2==0){
			chan=1;
			break;
		}
	}if(chan==1){
		printf("so co so chan\n");
	}else{
		printf("so co toan so le\n");
	}
}
