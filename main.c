#include<stdio.h>
#include "myMath.h"

int main(){
	float foo1 = 0,foo2 = 0, foo3 = 0;
	double x=0;
printf("enter a numbers : \n");
	scanf("%lf" , &x);
	foo1 = sub(add(Exp((int)(x)),Pow(x,3)),2);
	printf("the result of the function 'e^x+x^3-2' in the point  %lf is  : %lf" ,x,foo1);
	
	foo2 = add(mul(x,3),mul(Pow(x,2),2));
	printf("the result of the function '3x+2x^2' in the point %lf is :%lf" ,x,foo2);
	
	foo3 = sub(div(mul(Pow(x,3),4),5),mul(x,2));
	printf("the result of the function '(4x^3)/5-2x' in the point %lf is : %lf " ,x,foo3);
}