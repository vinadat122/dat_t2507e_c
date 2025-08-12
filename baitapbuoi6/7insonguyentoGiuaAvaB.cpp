#include <stdio.h>
int main(){
	
	int a,b;
	printf("nhap a\n");
	scanf("%d",&a);
	printf("nhap b\n");
	scanf("%d",&b);
	
	for(int i=a;i<=b;i++){
		int count=0;
		for(int r=1;r<=i;r++){
			if(i%r==0){
				count++;
			}
		}if(count==2){
			printf("%d\n",i);
		}
	}
}
