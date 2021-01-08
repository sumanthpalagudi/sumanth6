#include<stdio.h>
#include<string.h>
int main(){
		char classes[20];
		int sfail;
		printf("Enter the class obtained: ");
		scanf("%s",classes);
		printf("Enter number of subjects failed: ");
		scanf("%d",&sfail);
		printf("\n");
int num=(strcmp(strlwr(classes),"first"))? 1:(strcmp(strlwr(classes),"second"))? 2:(strcmp(strlwr(classes),"third"))? 3:0;
switch(num){
			case 1:
				if(sfail>3) printf("no grace marks awarded\n");
				else if(sfail<=3) printf("Your grace marks is 5\n");
				break;
			case 2:
				if(sfail>2) printf("no grace marks awarded\n");
				else if(sfail<=3) printf("Your grace marks is 4\n");
				break;
			case 3:
				if(sfail>1) printf("no grace marks awarded\n");
				else if(sfail==1) printf("Your grace marks is 5\n");
				break;
			default:
				printf("Try again\n");
			}
		return 0;
}

