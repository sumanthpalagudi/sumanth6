#include<stdio.h>
int main(){
	int n,f1=0,f2=1,f=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	n-=2;
	if (n>0){
		printf("The first %d fibbanocci number are %d, %d, ",n,f1,f2);
		do{
			f=f1+f2;
			printf("%d, ",f);
			f1=f2;f2=f;
			n--;
		}while(n>0);
		printf("\n");
	}
}

