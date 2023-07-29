/*#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("enter value sp : ");
	scanf("%d",&sp);
	printf("enter value cp : ");
	scanf("%d",&cp);
	profit=sp-cp;
	loss=cp-sp;
	if(sp>cp){
		printf("profit is: %d",profit);
	}
	else if(sp<cp){
		printf("loss is: %d",loss);
	}
	else{
		printf("no profit no loss");
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
	if(number>99&&999>number){
		printf("number is three digit %d",number);
	}
	else{
		printf("number is not three digit %d",number);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int stu1,hindi,math,eng,sci,marathi;
	int stu2,hindi2,math2,eng2,sci2,marathi2;
	printf("enter value hindi,math,eng,sci,marathi : ");
	scanf("%d%d%d%d%d", &hindi,&math,&eng,&sci,&marathi  );
	printf("enter value hindi2,math2,eng2,sci2,marathi2 : ");
	scanf("%d%d%d%d%d", &hindi2,&math2,&eng2,&sci2,&marathi2);
	stu1=(hindi+math+eng+sci+marathi);
	stu2=(hindi2+math2+eng2+sci2+marathi2);
	if(stu1>stu2){
		printf("student 1 is topper %d",stu1);
	}
	else if(stu1<stu2){
		printf("student 2 is topper %d",stu2);
	}
	else{
		printf("no one is topper");
	}
	return 0;
}
*/


/*#include<stdio.h>
int main()
{
	int number;
	printf("enter the value number : ");
	scanf("%d",&number);
	if(number%7==0){
		printf("divisible by: %d", number);
	}
	else{
		printf("not divisible by: %d",number);
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
	if (number%2==0){
		printf("even number : %d",number);
	}
	else{
		printf("odd number : %d", number);
	}
	return 0;
}
*/


/*#include<stdio.h>
int main()
{	
	int number,last_digit;
	printf("enter value number :");
	scanf("%d",&number);
	last_digit=number%10;
	if(last_digit%3==0){
		printf("last digit divisible by 3 : %d",number);
	}
	else{
		printf("last digit not divisible by 3: %d",number);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int age;
	printf("enter value age : ");
	scanf("%d",&age);
	if(age>=18){
		printf("a person is eligible by voting");
	}
	else{
		printf("a person is not eligible by voting");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int number;
	printf("enter value number :");
	scanf("%d",&number);
	if(number%5==0)
	{
		printf("hello");
	}
	else
	{
		printf("bye");
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int age;
	printf("enter value age : ");
	scanf("%d",&age);
	if(age>60)
	{
		printf("person is senior citizen %d",age);
	}
	else
	{
		printf("person is not senior citizen %d",age);
	}
	return 0;
}



