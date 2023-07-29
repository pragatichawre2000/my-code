/*#include<stdio.h>
int main()
{
	int number;
	printf("enter value number :");
	scanf("%d",&number);
	if(10>number)
	{	
		printf("one digit number");
	}
	else if (100>number)
	{
		printf("two digit number");
	}
	else if(1000>number)
	{
		printf("three digit number");
	}
	else
	{
		printf("%d",number);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int month;
	printf("enter value month :");
	scanf("%d",&month);
	if(month==1||month==3||month==7||month==8||month==10||month==12)
	{
		printf("31 days" );
	}
	else if(month==4||month==6||month==9)
	{
		printf("30 days");
	}
	else
	{
		printf("29,28 days");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int number;
	printf("enter value number : ");
	scanf("%d",&number);
	if (number>0)	
	{
		printf("number is positive : %d", number);
	}
	else if(number<0)
	{
		printf("number is negative :%d",number);
	}
	else
	{
		printf("number is zero : %d", 0);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int ac,eng,eco,bo,bm,percentage;
	int total_marks=500, obm_marks;
	printf("enter value ac,eng,eco,bo,bm ;");
	scanf("%d%d%d%d%d",&ac,&eng,&eco,&bo,&bm);
	obm_marks=(ac+eng+eco+bo+bm);
	percentage=((obm_marks*100)/total_marks);
	if(percentage>=90)
	{
		printf("Grade A\n");
	}
	else if(percentage>=80)
	{
		printf("Grade B\n");
	}
	else if(percentage>=70)
	{
		printf("Grade C\n");
	}
	else if(percentage>=60)
	{
		printf("Grade D\n");
	}
	else if(percentage>=40)
	{
		printf("Grade E\n");
	}
	else {
		printf("Grade F\n");
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int BS, HRA, DA, GS;
	printf("enter value BS :");
	scanf("%d", &BS);
	printf("enter value HRA :");
	scanf("%d", &HRA);
	printf("enter value DA :");
	scanf("%d",&DA);
	GS=(BS+HRA+DA);
	if(BS<=10000)
	{
		printf("Gross Salary : %d",GS);
	}
	else if(BS<=20000)
	{	
		printf("Gross Salary : %d",GS);
	}
	else if(BS>=20000)
	{	
		printf("Gross Salary : %d",GS);
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int costp,road_tax;
	printf("entetr value costp=");
	scanf("%d",&costp);
	if(costp>100000)
	{
		printf("road tax : %d",(100000*15)/100);
	}
	else if(costp>50000&&costp<100000)
	{
		printf("road tax : %d",(100000*10)/100);
	}
	else if(costp<=50000)
	{
		printf("road tax : %d",(50000*5)/100);
	}
	return 0;
}		
*/
/*include<stdio.h>
int main()
{
	int hight;
	printf("enter value hight= ");
	scanf("%d",&hight);
	float feet=5;
	float inches=60;
	if(hight>=60)
	{ 
		printf("allowed to ride");
	}
	else
	{
		printf("not allowed to ride");
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
	printf("enter value b : ");
	scanf("%d",&b);
	printf("enter value c : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d  is greter ", a);
		}
		else 
		{
			printf(" %d is greter ",c);	
		}
	}
	else
	{      if(b>c)
		{
			printf("%d  is greter ", b);
		}
		else 
		{
			printf(" %d is greter ",c);	
		}
	}
	return 0;
}
*/
	
