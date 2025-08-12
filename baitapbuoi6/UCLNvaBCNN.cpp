#include<stdio.h>
int main(){
	
	int a,b;
	
	printf("nhap a\n");
	scanf("%d",&a);
	
	printf("nhap b\n");
	scanf("%d",&b);
	
	int r;
	int x=a, y=b;
	
    for(r=a%b;r!=0;r=a%b){
			a=b;
			b=r;
		}printf("UCLN la %d\n",b);
		 printf("BCNN la %d\n",((x*y)/b));
}
