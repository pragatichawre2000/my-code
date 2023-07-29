/*#include<stdio.h>
int main()
{
	int tempreature;
	printf("enter value tempreature : ");
	scanf("%d",&tempreature);
	float c=100;
	if(tempreature>=c){
		printf("water is boilling");
	}
	else{
		printf("water is not boilling");
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
int main(){
	int purcquan,disc,cost;
	printf("enter value purcquan:");
	scanf("%d",&purcquan);
	disc=(purcquan*10)/100;
	cost=(purcquan+disc);
	if(purcquan>=1000){
		printf("%d",cost);
	}
	else{
		printf("invalid");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main(){
	int salary,service_year,bonus,netbonus;
	printf("enter value salary : ");
	scanf("%d",&salary);
	printf("enter drvicr year: ");
	scanf("%d",&service_year);
	bonus=(salary*5)/100;
	netbonus=salary+bonus;
	float y=5;
	if (service_year>=y){
		printf("netbonus is: %d",netbonus);
	}
	else{
		printf("invalid");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int class_attendance, class_held, percentage;
	printf("enter value class_attendance, class_held :");
	scanf("%d%d",&class_attendance, &class_held);
	percentage=((class_attendance*100)/class_held);
	if(percentage>=75)
	{
		printf("student is allowed sit in exam");
	
	}	
	else
	{
		printf("student is not allowed sit in exam");
	}	
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value a : ");
	scanf("%d",&a);
	printf("enter value b : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d",a-b);
	}
	else
	{
		printf("%d",a+b);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int number;
	printf("enter value number: ");
	scanf("%d",&number);
	if(number%3==0)
	{
		printf("it's with : %d", 3);
	}
	else if(number%7==0)
	{
		printf( " it's with : %d", 7);
	}
	else{
		printf("%d", number);
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
	if(number%4==0)
	{
		printf("%d",(number+1));
	}
	else
	{
		printf("%d",(number-1));
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value a :");
	scanf("%d",&a);
        printf("enter value b :");
	scanf("%d",&b);
	char c;
        printf("enter value c :");
	scanf("\n%c",&c);
	if(c=='+')
	{
		printf("%d",a+b);
	}
	else if(c=='-')
	{
		printf("%d",a-b);
	}	
	else if(c=='*')
	{
		printf("%d",a*b);
	}
        else
	{
		printf("%d",a%b);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{	
	int length, breagth,area, perimeter;
	printf("enter value length :");
	scanf("%d",&length);12
	printf("enter value  breagth :");
	scanf("%d",&breagth );
	area=length*breagth;
	perimeter=2*(length+breagth);
	if(area>perimeter)
	{
		printf("area is greater ");
	}
	else if(area==perimeter)
	{
		printf("both are equal");
(	}
	else
	{
		printf("perimeter is greater");
	}
	return 0;
}
*/

