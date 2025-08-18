#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	
	int ary[n];
	for( int i = 0; i < n; i++){
		printf("nhap phan tu %d\n",i);
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("nhap x\n");
	scanf("%d",&x);
	
	int khoangcach = abs(ary[0] - x);
	int xanhat1 = ary[0];
	int xanhat2 = xanhat1;	
	for (int i = 0; i < n; i++){	
		if(abs(ary[i] - x) > khoangcach){
			khoangcach = abs(ary[i] - x);
			xanhat1 = ary[i];
			xanhat2 = xanhat1;
		}else if(abs(ary[i] - x) == khoangcach && ary[i] != xanhat1){
			 xanhat2 = ary[i];
		}
	}
	if(xanhat2 != xanhat1){
		printf(" %d va %d\n", xanhat1, xanhat2);
	}else{
		printf("gia tri xa x nhat la %d\n",xanhat1);
	}
}
