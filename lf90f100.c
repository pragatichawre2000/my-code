/*#include<stdio.h>	//f90
int main()
{
	int n;
	scanf("%d",&n);
	int sum = 0;
	for(int i=1;i<=n; i++)
	{
		sum = sum+i;
	}
	printf("%d",sum);
	return 0;
}
*/		
	
/*#include<stdio.h> 				//f91
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0; 
	int c=0;
	for(int i=2; i<=n; i=i+2)
	{
		sum=sum+i;
		c=c+1;
	}
	printf("%d %d",sum,c);
	return 0;
}
*/

/*#include<stdio.h> 	//f94^
int main()
{
	int n;
	printf("enter value number : ");
	scanf("%d",&n);
	int p=1;
	for(int i=1; i<=n; i++)
	{
		p=p*i;
	}
	printf("%d",p);
	return 0;
}
*/

/*#include<stdio.h>	//f92
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=0; i<100; i=i+1)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}*/

/*#include<stdio.h>	//f92
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	int c=1;
	for(int i=0; i<10; i=i+1)
	{
		if(i%2==0)
		{
			sum=sum+i;
			c=c+1;
		}
	}
	printf("%d %d",sum,c);
	return 0;
}
*/

/*#include<stdio.h>
int main()												
{						//f93
	//int n;
	//scanf("%d",&n);
	for(int i=1; i<100; i++)
	{
		if(i%7==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{					//f95
	
	int n;
	int m;
	scanf("%d %d", &n, &m);
	for(int i = n;i<m; i++)
	{
		if(i%2==0)
		{
			if(i%7==0)
			{
				printf("%d",i);
			}
		}
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{					//f96
	int n;
	scanf("%d",&n);
	int sum=0;
	int c=0;
	for(int i=1; i<=n; i++)
	{
		if(i%3==0)
		{
			sum=sum+(i*2);
			c=c+1;
		}
	}
	printf("%d",sum);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{				//f97				
							
	int n;
	scanf("%d",&n);
	int s=1;
	for(int i=2; i<n; i++)
	{
		s=s+1/i;
	}
	printf("%d",s);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{				//f98										
	int p;
	int q;
	int n;
	int m;
	scanf("%d %d %d %d",&p,&q,&n,&m);
	int sum=0;
	for(int i=n; i<m;)
	{
		if(i%p==0)
		{
			if(i%q!=0)
			{
				sum=sum+i;
			}
		}
		i=i+1;
	}
	printf("%d",sum);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{				//f99
	int a,b,p,r,h,l;
	scanf("%d %d", &a,&b);
	p=a*b;
	for(int b=0; b>a;)
	{
		r=a%b;
		a=b;
		b=r;
	}
	h=a;
	l=p/h;
	printf("%d %d", l,h);
	return 0;
}
*/
		
/*#include<stdio.h>
int main()
{
	int n,r;
	int s=0;
	scanf("%d %d",&n,&r);
	for(n>0)
	{
		r=n%10;
		s=s+r;
	}
	n=n/10;
	printf("%d",s);
	return 0;
}
*/	
			
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<n/2; i++);
	{
		if(n%i==0)
		{
			printf("%d",i);
		}
	}
	
}	
*/


/*#include<stdio.h>
int main()				//f103
{
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i<10000; i++)
	{
		if(i%2==0);
		{
			s=s+i;
		}
	}
	else
	{	
		if(s==n)
		{
			profitf("%d", perfect no.);
		}
		else
		{
			printf("%d", not perfect no.);
		}
	}
	
	
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s=0;
	int p=0;
	for(int i=1; i<n; i++)
	{
		p=(p+(5*10)*i);
		s=s+p;
	}
	i=i+1;
	printf("%d",s);
	return 0;
}
					
	































			
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
