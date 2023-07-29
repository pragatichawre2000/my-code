

#include<stdio.h>
int main()
{
  	float pi,r,area;
  	pi=3.14;
  	printf("enter the vqlue of r : ");
  	scanf("%f",&r);
  	area=(3.14*r*r);
  	printf("%f",area);
  	return 0;
}

#include<stdio.h>
int main()
{
	int lenth,breadth,area,perimeter;
	printf("enter value lenth : ");
	scanf("%d",&lenth); 
	printf("enter value breadth : ");
	scanf("%d",&breadth);
	perimeter=2*(lenth+breadth);
	area=(lenth*breadth);
	printf("%d%d",area,perimeter);
	return 0;
}

#include<stdio.h>
int main()
{
	int x,y,a,b,c,d;
	printf("enter value x : ");
	scanf("%d", &x);
	printf("enter value y : ");
	scanf("%d", &y);
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	printf("%d%d%d%d", a,b,c,d);
	return 0;
}

#include<stdio.h>
int main()
{
	int c;
	float R,D, pi=3.1415;
	printf("enter value c : ");
	scanf("%d",&c);
	printf("enter value pi : ");
	scanf("%f",&pi);
	R=(c/2*pi);
	D=(2*R);
	printf("%f", D);
	return 0;
}
	
#include<stdio.h>
int main()
{
	int a,b,sum,avg;
	printf("Enter the a value: ");
	scanf("%d",&a);
	printf("Enter the b value: ");
	scanf("%d",&b);	
	sum=a+b;
	avg=sum/2;
	printf("%d",avg);
	return 0;
}

#include<stdio.h>
int main()
{  
	float pi,r,area;
	pi=3.14;
	printf("enter value pi : ");
	scanf("%f",&pi);
	printf("enter value r: ");
	scanf("%f",&r);
	area=(4*(pi*r*r*r)/3);
	printf("%f",area);
	return 0;
}	
	
#include<stdio.h>
int main()
{	
	int num;
	printf("enter value num : ");
	scanf("%d", &num);
	if(num%2==0)
	{
		if(num%7==0)
		{
			if(num%14==0)
			{
				printf("%d",num);
			}
			else
			{
				printf("%d",num*2);
			}
		}
		else
		{
			printf("%d",num*3);
		}
	}
	else
	{
		printf("%d", 0);
	}
	
	
	return 0;
}
				
		

