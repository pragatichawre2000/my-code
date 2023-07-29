/*#include<stdio.h>				//1
int main()					//23
{						//456
	int i,j,n;				//78910
	scanf("%d", &n);			//1112131415
	int p=1;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",p);
			p=p+1;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//1
int main()					//3
{						//555
	int i,j,n;				//7777
	scanf("%d", &n);			//99999
	int p=1;				//111111111111
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",p);
		}
		printf("\n");
		p=p+2;
	}
	return 0;
}
*/

						//0
/*#include<stdio.h>				//01
int main()					//012
{						//0123
	int i,j,n;				//01234
	scanf("%d", &n);			//012345
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>				//12345
int main()					//12345
{						//12345
	int i,j,n;				//12345
	scanf("%d", &n);			//12345
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//11111
int main()					//22222
{						//33333
	int i,j,n;				//44444
	scanf("%d", &n);			//55555
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//1
int main()					//44
{						//999
	int i,j,n,p;				//16161616
	scanf("%d%d",&n,&p);			//2525252525
	int c=1;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			p=c*c;
			printf("%d",p);
		}
		printf("\n");
		c=c+1;
	}
	return 0;
}
*/

/*#include<stdio.h>				//10
int main()					//10 8
{						//10 8 6
	int i,j,n;				//10 8 6 4
	scanf("%d",&n);				//10 8 6 4 2
	for(i=1; i<=n; i++)
	{
		int p=10;
		for(j=1; j<=i; j++)
		{
			printf("%d ",p);
			p=p-2;
		}
		printf("\n");
		
	}
	return 0;
}
*/

/*#incllude<stdio.h>
int main()					//10 8
{						//10 8 6
	int i,j,n;				//10 8 6 4
	scanf("%d",&n);				//10 8 6 4 2
	int p=1; 
	int k=p;
	for(i=5; i<=1; i=i-2)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",p);
			p=p+2;

		printf("\n");
		k=k+2;
		p=0;
		p=p+k;
	}
	return 0;
}
*/
	







