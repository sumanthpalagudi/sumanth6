#include<stdio.h>
#include<math.h>
int main(){
	double a,x,b,y,k,t;
	printf("Enter a,b,x,y,k,t values seperated by space: ");
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&x,&y,&k,&t);
	printf("value of (%g*%g + %g)/(%g*%g - %g) is %g\n",a,x,b,a,x,b,((a*x+b)/(a*x-b)));
	printf("value of 2.5*log(%g) + cos(32) + | %g^2+%g^2 | + 2*%g*%g is %.2f\n",x,x,y,x,y,(2.5*log(x)+cos(32)+fabs(pow(x,2)+pow(y,2))+2*x*y));
	printf("values of %g^5 + 10*%g^4 + 8*%g^3 + 4*%g + 2 is %g\n",x,x,x,x,(pow(x,5)+10*pow(x,4)+8*pow(x,3)+4*x+2) );
	printf("value of %g*e^(%g*%g)is %e\n",a,k,t,(a*exp(k*t)));
	return 0;
}

