#include <stdio.h>
int main(){
	
	int n, check=0;
	printf("Nhap so phan tu cua mang\n");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0; i<n; i++){
		printf("nhap phan tu so %d\n",i);
		scanf("%d",&ary[i]);
	}
	int solecuoi=ary[0];
	for(int i=0; i<n; i++){
		if(ary[i]%2!=0){
			solecuoi=ary[i];
			check=1;
		}
	}
	if(check==1){
		printf("so le cuoi cung cua mang la %d\n",solecuoi);
    }else{
    	printf("khong co so le trong mang");
	}
}
