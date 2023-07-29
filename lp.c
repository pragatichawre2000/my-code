//reverse number //345= 543
/*#include<stdio.h>
int main()
{
	int r,n;
	scanf("%d",&n);
	int p=0;
	while(n>0)
	{
		r=n%10;
		p=p*10+r;
		n=n/10;
	}
	printf("%d",p);
	return 0;
}
*/

// sum of digit// 435=12
/*#include<stdio.h>
int main()
{
	innanf("%d",&n);
	int sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}		
*/

//factor number // 18= 1,2,3,6,8,9,18
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int f=1;
	while(f<=n)
	{
		if(n%f==0)
		{
			printf("%d\n",f);
		}
		f=f+1;
	}
	
	return 0;
}		
*/

//perfect number
/*#include<stdio.h>
int main()
{
	int s=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n; i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("%d is aperfect number.\n",n);
	}
	else
	{
		printf("%d is not perfect number\n",n);
	}
	return 0;
}		
*/
//n terms = 5,55,555,5555,55555
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0; 
	int a=5;
	for(int i=1; i<=n;i++)
	{
		sum=sum+i;
		a=a*10+5;
	}
	printf("%d",sum);
	return 0;
}
*/


//table //2 to 20
/*#include<stdio.h>
int main()
{
	int  n;
	scanf("%d",&n);
	int p=1
	for( int i=2; i<=n)
	{
		for(int j=1; j<=10; j++)
		{
			printf("%d",i*j);
		}
		i++;
	
	}
	return 0;
}
*/

//prime number 
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("prime number%d\n",n);
	}
	else
	{
		printf("not prime number%d\n",n);
	}
	return 0;
}
*/
		
// finonaci number 
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c=0;
	for(int i=1; i<=n; i++)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
		
}
*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=10;
	int b=80;
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d\n",a);
			a=a+5;
		}
		else
		{
			printf("%d\n",b);
			b=b-10;
		}
	}
	return 0;
}
*/		
	
//divisible by 1,2,3,4,5,6,7,8,9
/*#include<stdio.h>
int main()
{	
	int n;
	scanf("%d",&n);
	int c=0;
	int k=1;
	for(int=2; i<=n; i++)
	{
		for(int j=2; j<=10; j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==9)
		{
			k=k+1;
		}
	}
	return 0;
}
*/	
	
/*#include<stdio.h>
int main()
{
	int x, n;
	scanf("%d",&n);
	sum=0;
	for(int i=1; i<=n; i++)
	{
		sum=sum+(x*i)/1;
	}
	printf("%d",sum);
	return 0;
}
*/

//composite number		
/*#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d",&n);
	int c=0;
	for(int i=1; i<=n; i++)
	{
		if(m%i==0)
		{
			c=c+1;
		}
	}
	if(c>2)
	{
		printf("%d\n",m);
	}
	else
	{
		m=m+1;
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k=2;
	int c=0;
	if(int i=n; n%
	{

	}
		


			
			
		
	
	




















	
