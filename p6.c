/*#include<stdio.h>
int main()
{					//1
	int i,j,k,n;			//01
	scanf("%d",&n);			//010
	for(i=1; i<=n; i++)		//1010
	{				//10101
	k=1;				//010101
		for(j=1; j<=i; j++)
		{
		if(k%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
			k=k+1;	
		}
		k=k+1;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{					
	int i,j,k,t,n;			//577
	scanf("%d",&n);			//530 485
	k=577,t=47;		        //442 401 362
	for(i=1; i<=n; i++)		//325 290 257 226
	{				//197 170 145 122 101
		for(j=1; j<=i; j++)	
		{
			printf("%d ",k);
			k=k-t;	
			t=t-2;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{					
	int i,j,k,t,n;			//4 5 4 3 2	
	scanf("%d",&n);			//3 4 5 4 3
	for(i=n-1; i>=1; i--)		//2 3 4 5 4
	{				//1 2 3 4 5
		for(j=i; j<=n; j++)	
		{
			printf("%d ",j);
		}
		k=j-2;
		for(j=1;j<i; j++)
		{
			printf("%d ",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{					
	int i,j,k,t,n;			//1 2 3 4 5	
	scanf("%d",&n);			//2 3 4 5 4
	for(i=1; i<n; i++)		//3 4 5 4 3
	{				//4 5 4 3 2
		for(j=i; j<=n; j++)	
		{
			printf("%d ",j);
		}
		k=j-2;
		for(j=1;j<i; j++)
		{
			printf("%d ",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}			
*/
/*#include<stdio.h>
int main()
{					
	int i,j,n;			//1 2 3 4 5	
	scanf("%d",&n);			//2 2 3 4 5 
	for(i=1; i<=n; i++)		//3 3 3 4 5
	{				//4 4 4 4 5
		for(j=1; j<=i; j++)	
		{
			printf("%d ",i);
		}
		for(j=1;j<=n; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}	
*/

/*#include<stdio.h>
int main()
{					
	int i,j,k,t,n;			//1 2 3 4 5	
	scanf("%d",&n);	
	k=1;				//10 9 8 7 6
	for(i=1; i<n; i++)		//11 12 13 14 15
	{				//20 19 18 17 16 
	if(i%2==0)
	k=k+n-1;			//21 22 23 24 25
		for(j=1; j<=n; j++)	
		{
			printf("%d ",k);
			k=k-1;
		}
		k=k+n+1;
	
	for(j=1;j<=n; j++)
	{
		printf("%d ",k);
		k=k+1;
	}
		printf("\n");
	}
	
	return 0;
}	
*/

/*#include<stdio.h>					//1
int main()						//121
{							//12321
	int i,j,n,k;					//12345321
	scanf("%d%d",&i,&j);				//123454321
	for(i=1;i<=n; i++)
	{
		for(j=1; j<(2*i-1); j++)
		{
			if(j<=i)
			{
				printf("%d",k);
				k=k+1;
				j=j+1;
			}
			else
			{
				k=k-2;
				printf("%d",k);
			}
		
		}
	}
	return 0;
}	
*/

/*#include<stdio.h>
int main()				//table
{
	int i,j,n;
	scanf("%d",&n);
	for(i=2; i<=n; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d",n'*'i"="n*i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>					////1
int main()						////11
{							//121
	int i,j,n;					//1321
	scanf("%d%d%d",&i,&j,&n);			//14321
	for(i=1;i<=n;i++)				//154321
	{
		for(j=1; j<=n;j++)
		{
			printf("%d",j);
		}
		
		for(j=i-2;j>=1; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/
		

#include<stdio.h>				//1*2*3*4*5
int main()					//1*2*3*4
{						//1*2*3
	int j,i,N;				//1*2
	scanf("%d%d%d",&i,&j,&N);		//1
	for(i=1; i<=N; i--)
	{
		for(j=1;j<i; j++)
		{
			printf("%d", j, "*");
		}
		printf("\n");
	}
	return 0;
}
			



























	




0









