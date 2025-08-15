#include <stdio.h>
int main(){
	
	int n;
	printf("nhap so luong phan tu cua mang\n");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0; i<n; i++){
		printf("nhap phan tu so %d\n",i);
	    scanf("%d",&ary[i]);
	}
	int SoDuongNhoNhat=ary[0], check=0;
	
	for(int i=0; i<n; i++){
		if(ary[i]>0){
			SoDuongNhoNhat=ary[i];
			check=1;
			break;
		}
	}
	
	for(int i=0; i<n; i++){
		if(ary[i]>0 && SoDuongNhoNhat > ary[i]){
			SoDuongNhoNhat=ary[i];
		}
	}
	if(check==1){
		printf(" so duong nho nhat la %d\n",SoDuongNhoNhat);
	}else{
		printf(" Day toan so <=0");
	}
}
