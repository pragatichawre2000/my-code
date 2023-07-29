#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	printf("enter value of c :");
	scanf("%d",&c);
	if(a>b)
	{
		max=a;
		max2=b;
	}
	else
	{
		max=b;
		max2=a;
	}
	if(max>c)
	{
		if(c>max2)
		{
			printf("%d", c);
		}
		else
		{
			printf("%d",max2);
		}
	}
	else
	{
		printf("%d",max);
	}
	return 0;
}




























