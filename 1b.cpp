#include<stdio.h>
int main(){
		int sales_amount;
		printf("Enter sales amount: ");
		scanf("%d",&sales_amount);
		if(sales_amount<=5000) printf("Commision is NIL for %d\n",sales_amount);
else if(sales_amount<=10000 &&sales_amount>5000) printf("commison for %d is %g\n",sales_amount,(double)sales_amount*0.02);
else if(sales_amount>10000) printf("Commision for %d is %g\n",sales_amount,(double)sales_amount*0.05);
	return 0;
}

