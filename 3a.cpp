#include<stdio.h>
int main(){
	int n,i=2,j,x;
	printf("Enter the n value: ");
	scanf("%d",&n);
	if(n>1) printf("The prime numbers from 1 to %d are ",n);
	while(i<n){
		j=2; x=0;
		while(j<i){
			if(i%j==0){
				x=1;
				break;
			}
			j++;
		}
		if(x==0) printf("%d, ",i);
		i++;
	}
	printf("\n");
	return 0;
}

