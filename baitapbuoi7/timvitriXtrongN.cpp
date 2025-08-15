#include<stdio.h>
int main(){
	
	int n,i;
	printf("Mang co may so?\n");
	scanf("%d",&n);
	
	int ary[n];
	for( i=0; i<n; i++){
		printf("nhap gia tri %d\n",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("nhap x\n");
	scanf("%d",&x);
	
	for(i=0; i<n; i++){
		if(x==ary[i]){
			printf("x o vi tri %d\n",i);
		}else{
			printf("x khong co trong mang");
		}
	}
}
