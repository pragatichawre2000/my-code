//rectangle
/*#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1; i<=m; i++)
	{
		printf("*");
	}
	return 0;
}
*/

//right angled
/*#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1; i<=m; i=i+2)
	{
		printf("*"*i);
	}
	return 0;
}
*/

//reads n input
/*#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1; i<=m; i++)
	int a;
		printf("%d",a);
	}
	return 0;
}
*/

//print n  to 1
/*#include<stdio.h>				//5
int main()				       	//4
{					     	//3
	int n;					//2
	scanf("%d",&n);			       	//1	
	for(int i=1; n>i; n=n-1)
	{
		printf("%d\n",n);
	}
	return 0;
}
*/

/*#include<stdio.h>				//+++
int main()				       	//+++
{					     	
	int n,m;				
	scanf("%d%d",&n,&m);		       		
	for(int i=1; i<=n; i++)
	{
		printf("+"*m);
	}
	return 0;
}
*/

//factorial
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; n=n-1)
	int f=1;
	{
		f=f*n;
	}
	printf("%d",f);
	return 0;
}
*/	

#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(m%2==0)
	{
		for(int i=m+2;i<n; i=i+2)
		{
			printf("%d\n",i);
		}
	for(int i=m+1; i<n; i=i+2)
	{
		printf("%d\n",i);
	}
	}
	
	return 0;
}
	

















