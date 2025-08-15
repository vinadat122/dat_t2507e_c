#include <stdio.h>
int main (){
	
	int n;
	printf("nhap mang n\n");
	scanf("%d",&n);
	
	int ary[n];
	for( int i = 0; i < n; i++){
		printf(" nhap phan tu %d\n ",i);
		scanf("%d",&ary[i]);
	}
	int sum=0, summax=0;
	
	for( int i = 0; i<n; i++){
		if(ary[i]>0){
			sum += ary[i];
			if(sum > summax){
				summax = sum;
			}
		}else{
			sum=0;
		}
	}
	printf("tong cac so duong lien tiep lon nhat la %d\n",summax);
}
