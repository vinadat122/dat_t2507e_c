#include<stdio.h>
int main(){
	
	int n,i;
	printf("Mang co may so?\n");
	scanf("%d",&n);
	
	int ary[n];
	for(i=0; i<n; i++){
		printf("nhap gia tri %d\n",i);
		scanf("%d",&ary[i]);
	}
	int sum=0, sole=0;
	for (i=0; i<n; i++){
		if(ary[i]%2!=0){
			sum+=ary[i];
			sole++;
		}
	}
	if(sole!=0){
	    printf("trung binh cong cac so le = %f\n",(float)sum/sole);
	}else{
		printf("Day khong co so le");
	}
}
