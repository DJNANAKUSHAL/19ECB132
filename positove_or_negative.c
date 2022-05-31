#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	(a>0)?printf("%d is +ve",a):((a<0)?printf("%d is -ve",a):printf("it is a zero"));
}
/* enter a value3 
3 is +ve */
