#include<stdio.h>
#include<string.h>
#define ASCII 48
int main(){
	int num;
	printf("Enter a positive number: ");
	scanf("%d",&num);
	if(num<0) printf("\nProgram terminated because of negative number");
	else{
		int sum=0,i=0;
		for(;num!=0;i=num%10,sum+=i,num/=10);
		printf("%d\n",sum);
	
	}
	return 0;
}

