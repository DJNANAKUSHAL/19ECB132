#include<stdio.h>
int main()
{ int i,n;
printf("print all even numbers till:");
scanf("%d", &n);
printf("even numbers from 1 to %d are: \n",n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
}
  return 0;
}
/* output
print all even numbers till: 4
even numbers from 1 to 4 are: 
2
4 */