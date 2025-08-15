#include <stdio.h>
int main(){
	
	int n;
	printf("nhap so luong phan tu cua mang\n");
	scanf("%d",&n);
	
	int ary[n];
	for ( int i=0; i<n; i++){
		printf("nhap phan tu thu %d\n",i);
	    scanf("%d",&ary[i]);
	}
	
	int soduong=0, dem=0;
	
	for (int i=0; i<n; i++){
		if(ary[i]>0){
			soduong++;
			if(soduong>dem){
				dem=soduong;
			}
		}else{
			soduong=0;
		}
	}
	printf("so duong lien tiep lon nhat la %d\n",dem);	
}
