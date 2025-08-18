#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int n=0;
	for (; n<=0; n++){
		printf("nhap n\n");
	    scanf("%d",&n);
	}
	
	int ary[n];
	for( int i = 0; i<n; i++){
		printf("nhap phan tu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("nhap x\n");
	scanf("%d",&x);
	
	int gannhat1 = ary[0];
	int khoangcach = abs(ary[0] - x);
	int gannhat2 = gannhat1;
	
	for( int i=0; i<n; i++){
		if (abs(ary[i] - x) < khoangcach){
			khoangcach = abs(ary[i] - x);
			gannhat1 = ary[i];
			gannhat2 = gannhat1;
		}else if(abs(ary[i] - x) == khoangcach && ary[i] != gannhat1){
			gannhat2 = ary[i];
		}
	}
	if(gannhat2 != gannhat1){
		printf("%d va %d\n", gannhat1, gannhat2);
	}else{
		printf("%d", gannhat1);
	}
}
