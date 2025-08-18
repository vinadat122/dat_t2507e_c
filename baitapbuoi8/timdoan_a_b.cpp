#include <stdio.h>
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
	printf("doan {a,b} la {%d,%d}\n",min,max);
}
