/*#include<stdio.h>
int main()
{ 
	int i,n;
	scanf("%d%d",&i,&n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		
		}
	}
	return 0;
} 
*/	

 //Odd Number
  
/*#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d%d",&i,&n);
	for(i=1; i<=((2*n)-1); i=i+2)
	{
		printf("%d\n",i);
	}
	return 0;
}
*/


// Solid Right Angled Triangle
/*#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d%d%d",&i,&j,&n);
	if(i<=n)
	{
		for(int k=1; k<=i; k++)
		{
			for(int l=1; 1<=k; l++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		for(int k=1; k<=j; k++)
		{
			for(int l=1; l<=k; 	l++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
*/
//prime number


/*#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++);
	{
		if(n%i==0)
		{
			c=c+1;
		}
	
	}
	if(c==2)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is not a prime number.\n",n );
	
	}
	return 0;
}


/*#include <stdio.h>

int main() {
    int i, n, c = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            c = c + 1;
        }
    }

    if (c == 2) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
*/	




