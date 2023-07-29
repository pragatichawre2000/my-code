/*#include<stdio.h>
int main()
{
	int a;
	printf("enter value a :");
	scanf("%d",&a);
	if(a%100==0)
	{
		printf("divisible by 100");
	}
	else
	{
		printf("not divisible by 100");
	}
	return 0;
}		
*/

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter value a :");
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("disible by 400");
	}
	else
	{
		printf("not divisible by 400");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter value a :");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
	printf("enter value c :");
	scanf("%d",&c);
	printf("enter value d :");
	scanf("%d",&d);
	printf("enter value e :");
	scanf("%d",&e);
	if(a==b && b==c && c==d && d==a &&e==90)
	{
		printf("it is square");
	}
	else if(a==c&&b==d&&e==90)
	{
		printf("it is rectangle");
	}
	else if(a==c && b==d &&e==!90)
	{
		printf("it is parallelogram ");
	}
	else if(a==b && b==c && c==d && d==a&e==!90)
	{
		printf("it is rombus");
	}
	else
	{
		printf("invalid");
	}
	return 0;
}	
*/

/*#include<stdio.h>
int main()
{
	int num;
	printf("enter value num : ");
	scanf("%d",&num);
	if(num%5==0)
	{
		if(num%11==0)
		{
			printf("%d\n%d", 5,11);
		}
		else
		{
			printf("%d",5);
		}
	}
	else if(num%11==0)
	{
		printf("%d",11);
	}
	else
	{
		printf("none");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value a:");
	scanf("%d",&a);
	printf("enter value b :");
	scanf("%d",&b);
	printf("enter value c :");
	scanf("%d",&c);
	if(a+b+c<=180)
	{
		if(a==b && b==c && c==a)
		{
			printf("equiangular tringle");
		}
		else if(a==90||b==90||c==90)
		{
			printf("right angle tringle");
		}
		else if(a>90||b>90||c>90)
		{
			printf("obtus");
		}
		else if(a<90||b<90||c<90)
		{
			printf("acute tringle");
		}
		else
		{
			printf("none");
		}
		}
	 else
	 {
	 	printf("invalid");
	 }	
	return 0;
}
*/

