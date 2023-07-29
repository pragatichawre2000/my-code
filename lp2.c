//100,97,94,91,88,.....
/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1; a>0; i++)
	{
		printf("%d ",a);
		a=a-3;
	}
	return 0;
}
*/

//composite number use break
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n-1; i++)
	if(n%i==0)
	{
		printf("the given number is composite%d\n",n);
		break;
	}
	
	return 0;
}
*/

//composite and prime number
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=2; i<=n-1; i++)
	if(n%i==0)
	{
		a=1;
		break;
	}
	if(a==0)
	{
		printf("the given number is prime number %d\n",n);
	}
	else
	{
		printf("the given number is composite%d\n",n);
	}
		
	return 0;
}
*/

//factor
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=100; i++)
	{
		if(i%2==0)
		{
			continue;
		}
		
			printf("%d\n",i);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
*/

//wap to count digits of a given number
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	while(n!=0)
	{
digit number		n=n/10;
		count++;
	}
	printf("The no.of digits are %d", count);
	return 0;
}
*/		
	
/*#include<stdio.h>
int main()
{
	int R, n;
	scanf("%d",&n);
	int sum=0;
	while(n!=0)
	{
		R=n%10;
		sum=sum+R;
		n=n/10;
	} 
	printf("the sum of digit number %d", sum);
	return 0;
}
*/			


#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int r=0;
	while(n>0)
	{
		r=r+(n%10);
		r=r*10
		n=n/10;
	}
	
=




#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int r=0;
	for(int i=1; i<=n; i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		else
		{
			sum=sum-i;
		}
	}
	printf(" The sum is : %d, sum);
	return 0;
}
		

















