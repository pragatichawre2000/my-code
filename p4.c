/*#include<stdio.h>					//0
int main()						//22
{							//444
	int i,j,n;					//6666
	scanf("%d",&n);					//88888
	for(i=0; i<=n; i=i+2)
	{
		for(j=0; j<=i; j=j+2)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//12345
int main()					//56789
{						//1011121314
	int i,j,n;				//1516171819
	scanf("%d",&n);				//2021222324
	int p=1;								
	for(i=1; i<=n; i=i+1)
	{
		for(j=1; j<=n; j=j+1)
		{
			printf("%d ", p);
			p=p+1;
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>					//012345
int main()						//01234
{							//0123
	int i,j,n;					//012
	scanf("%d",&n);					//01
	for(i=n; i>=0; i--)				//0
	{
		for(j=0; j<=i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>					//1
int main()						//35
{							//579
	int i,j,n,m;					//791113
	scanf("%d",&n);					//911131517
	int k=1;				
	for(i=1; i<=n; i=i+2)
	{
		m=k;
		for(j=1; j<=i; j=j+2)
		{
			printf("%d ", m);
			m=m+2;
		}
		printf("\n");
		k=k+2;
	}
	return 0;
}
*/


/*#include<stdio.h>					//012345
int main()						//01234
{							//0123
	int i,n,j;					//012
	scanf("%d",&n);					//01
	for(i=n;i>=1; i--)				//0
	{
		for(j=0; j<=i; j++)
		{
			printf("%d ", j);
	
		}
		printf("\n");
	}
	return 0;
}
*/

/*include<stdio.h>				//54321
int main()					//4321
{						//321
	int i,j,k,n;				//21
	scanf("%d",&n);				//1
	for(i=n; i>=1; i--)
	{
	k=i;
		for(j=1; j<=i; j++)
		{
			printf("%d",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}
*/	
	
/*#include<stdio.h>				//1
int main()					//21
{						//321
	int i,j,k,n;				//4321
	scanf("%d",&n);				//54321
	for(i=1; i<=n; i++)
	{
	k=i;
		for(j=1; j<=i; j++)
		{
			printf("%d",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}
*/	
	
/*#include<stdio.h>				//1
int main()					//35
{						//579
	int j,i,k,m,n;	 			//791113
	scanf("%d",&n);				//911131517
	k=1;
	for(i=1; i<=n; i++)
	{
		m=k;
		for(j=1; j<=i; j++)
		{
			printf("%d",m);
			m=m+2;
		}
		printf("\n");
	}
	k=k+2;
	return 0;
}
*/

/*#include<stdio.h>				//      1
int main()					//     12
{						//    123
	int j,i,n;				//   1234											
	scanf("%d",&n);				//  12345
	for(i=1; i<=n; i++)
	{
		printf("%d",(n-i*"--"));
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>					//1
int main()						//12
{							//123
	int i,j,n;					//1234
	scanf("%d",&n);					//12345
	for(i=1; i<=n; i=i+1)				//1234
	{						//123
		for(j=1; j<=i; j=j+1)			//12
		{					//1
			printf("%d ", j);
		}
		printf("\n");
	}
	
	for(i=n-1;i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>				//1
int main()					//24
{						//369
	int i,j,k,n;				//481216
	scanf("%d",&n);				//510152025
	for(i=1; i<=n; i++)
	{
		k=i;
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k=k+i;
		}
		printf("\n");
	}
	return 0;
}
*/
	
/*#include<stdio.h>				//1
int main()					//234
{						//56789
	int i,j,k,n;				//101112131415
	scanf("%d", &n);
	k=1;
	for(i=1; i<=n; i=i+2)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k=k+1;
		}
		printf("\n");
	}
	return 0;
}
*/	
	






