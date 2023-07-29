/*#include<stdio.h>
int main()				//55555
{					//4444
	int n;				//333	
	scanf("%d",&n);			//22
	for(int i=n;i>=1;i--)		//1
	{		
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/
	
#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d%d%d",&j,&i,&n);
	for(i=1; i<=n; i++)
	{
	k=i;
		for(j=1; j<=i; j++)
		{
			printf("%d",k);
			k=k/2;
		}
		printf("\n");
	}
	return 0;
}


















	
			
