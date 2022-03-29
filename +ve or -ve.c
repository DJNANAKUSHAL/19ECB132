#include<stdio.h>
main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	(a>0)?printf("%d is +ve",a):((a<0)?printf("%d is -ve",a):printf("it is a zero"));
}

