#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	
	int ary[n];
	for (int i=0; i<n; i++){
		printf("nhap phan tu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int max = ary[0];
	int min = ary[0];
	
	for (int i=0; i<n; i++){
		if(ary[i] > max){
			max = ary[i];
		}
		if(ary[i] < min){
			min = ary[i];
		}
	}
	if(abs(min) < abs(max)){
		printf("doan can tim la {%d,%d}\n",-abs(max),abs(max));
	}else{
		printf("doan can tim la {%d,%d}\n",-abs(min),abs(min));
	}
}
