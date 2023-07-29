/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n; i++)
	{
	int j=1;
	if(j<=i)
	{
		printf("%d\n",i );
	}
	else
	i=i+1;
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
