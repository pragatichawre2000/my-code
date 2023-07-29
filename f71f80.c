/*#include<stdio.h>
int main()
{
	int day,month,year;
	printf("enter value year :");
	scanf("%d",&year);
	printf("enter value month :");
	scanf("%d",&month);
	printf("enter value day :");
	scanf("%d",&day);
	if(year>0)
	{
		if(month>=1&&month<=12)
		{
			if(day>=1&&day<=31)
			{
				printf("given year is valid");
			}
			else
			{
*/

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter value a :");
	scanf("%d",&a);
	if(a<=50)
	{
		printf("%f",(a*0.5)+(20/100));
	}
	else if(a<=150)
	{
		printf("%f",(a*0.75)+(20/100));
	}
	else if(a<=250)
	{
		printf("%f",(a*0.120)+(20/100));
	}
	else
	{
		printf("%f",(a*1.50)+(20/100));
	}	
	return 0;
}
*/

/*#include<stdio.h>
int main()
200
	int a;
	printf("enter value a : ");	
	scanf("%d", &a);
	if(a<=100)
	
	{
		printf("no charge");
	}
	else if(a<=200)
	{
		printf("%d", (a-100)*5);
	}
	else 
	{
		printf("%d",(a-200*10+100*5));
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
	int a,b,c;
	printf("enter value a : ");
	scanf("%d",&a);
	printf("enter value b: ");
	scanf("%d",&b);
	c=a+b;
	if(c>=15 && c<=20){
		printf("sum is: %d",20);
	}
	else{
		printf("sum is: %s","invalid");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value a :");
	scanf("%d",&a);
	printf("enter value b :");
	scanf("%d",&b);
	printf("enter value c :");
	scanf("%d",&c);
	if(a>50&&c>5600)
	{
		printf("%s", "Grade 7");
	}
	else if(b>0.7&&c>5600)
	{
		printf("%s", "Grade 8");	
	}	
	else if(a>50&&b>0.7)
	{
		printf("%s", "Grade 9");	
	}	
	else if(a>50&&b>0.7&&c>5600)
	{
		printf("%s","Grade 10");
	}
	else
	{
		printf("%s", "Grade 0");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter value a: ");
	scanf("%d",&a);
	if(a%4==0 && a%100==0 && a%400==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is a not leap year");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int we,cw,total;
	printf("enter value cw :");
	scanf("%d",&cw);
	printf("enter value we :");
	scanf("%d",&we);
	total=cw+we;
	if(cw>20)		
	{
		if(we>20)
		{
			if(total>45)
			{
			printf("pass");
			}
				else if(total==44)
				{ 
				printf("moderated done");
				}
				else
				{
				printf("fail");
				}
			}
		else if(total>45)
		{
			printf("Technical fail");
		}
		else
		{
			printf("fail");
		}
		}
	else if(we>20)
	{
		if (total>45)
		{
			printf("Technical fail");
		}
		else
		{
			printf("fail");
		}
	}
	else
	{
		printf("fail");
	}
	return 0;
}
*/


