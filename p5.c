/*#include<stdio.h>				//12345
int main()					//2345
{						//345
	int i,j,n;				//45
	scanf("%d", &n);			//5
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//13579
int main()					//3579
{						//579
	int i,j,n;				//79
	scanf("%d", &n);			//9
	for(i=1; i<=n; i=i+2)
	{
		for(j=i; j<=n; j=j+2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//54321
int main()					//5432
{						//543
	int i,j, k,n;				//54
	scanf("%d", &n);			//5
	for(i=n; i>=1; i--)
	{
		k=n;
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//12345
int main()					// 2345
{						//  345
	int i,j,k,n,m;				//   45
	scanf("%d", &n);
	m=1;         		//    5
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=n-i; j++);
		{
			printf(" ");
		}
	}
	k=m;
	for(j=1; j<=i; j=j+1)
	{
		printf("%d ",k);
		k=k+1;
	}
	printf("\n");
	m++;
	}
	return 0;
}
*/


/*#include<stdio.h>				//13579
int main()					//3579
{						//579
	int i,j,n;				//79
	scanf("%d", &n);			//9
	for(i=1; i<=n; i=i+1)
	{
		for(j=1; j<=n; j=j+1)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/
