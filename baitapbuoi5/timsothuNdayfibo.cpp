#include <stdio.h>
int main(){
	
	int n;
	printf("nhap so thu n\n");
	scanf("%d",&n);
	int x1=0;
	int x2=1;
	int x3;
	int stt=3;
	
	if(n==1){
		printf("so thu 1 trong day fibonacci la 0");
	}else if(n==2){
		printf("so thu 2 trong day fibonacci la 1");
	}else{
		while(stt<=n){
			x3=x1+x2;
			x1=x2;
			x2=x3;
			stt++;
		}
		printf("so thu %d trong day fibonacci la %d\n",n,x3);
	}
}

