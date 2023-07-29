/*#include<stdio.h>
int main()			  //1*2*3*4*5*
{				 //1*2*3*4*
	int i,j,n;		 //1*2*3*
	scanf("%d%d%d",&j,&i,&n);//1*2*
	for(i=n; i>=1; i--)	//1*
	{
		for(j=1; j<i; j++)
		{
			printf("%d*",j);
		}
		printf("\n");
	}
	return 0;
}
*/	
#include<stdio.h>		  //1
int main()			  //11
{				 //121
	int i,j,n;		 //1321
	scanf("%d%d%d",&j,&i,&n);//14321
	for(i=1; i<=n; i++)	//154321
	{
		for(j=1; j<=1 )
		{
			printf("%d*",j);
		}
		for(j=i-1; j>=1; j--)
		{
			printf("%d",j);
		
		}
		printf("\n");
	}
	return 0;
}

	

