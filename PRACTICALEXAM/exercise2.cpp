#include <stdio.h>

int check_prime(int n){
	if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main(){
	int n;
	do{
		printf("nhap so nguyen n\n");
		scanf("%d",&n);	
	}while(n<=0);
	int a[n];
	for(int i=0; i<n; i++){
		printf("nhap phan tu %d\n",i);
		scanf("%d",&a[i]);
	}
	int flag=0;
	for( int i=0; i<n; i++){
		if(check_prime(a[i])){
			printf("%d\n",a[i]);
			flag=1;
		}
	}
	if(flag == 1){
		printf("No prime number\n");
	}		
}

