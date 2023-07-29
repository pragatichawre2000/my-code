/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value a: " );
	scanf("%d",&a);
	printf("enter value b: ");
	scanf("%d",&b);
	if(a>b){
	    printf("%d",a);
	}
	else{
	    printf("%d",b);
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int d;
	printf("enter the value d : ");
	scanf("%d",&d);	
	if(d==0){
	    printf("monday");
	}
	else if(d==1){
		printf("tuesday");
	}
	else if(d==2){
	        printf("wednesday");
	}        
	else if(d==3){
		printf("thursday");
	}
	else if(d==4){
		printf("friday");
	}
	else if(d==5){
		printf("saturday");
	}
	else {
		printf("sunday");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int d;
	printf("enter the value d : ");
	scanf("%d",&d);	
	if(d==0){
	    printf("monday");
	}
	else if(d==1){
		printf("tuesday");
	}
	else if(d==2){
	        printf("wednesday");
	}        
	else if(d==3){
		printf("thursday");
	}
	else if(d==4){
		printf("friday");
	}
	else if(d==5){
		printf("saturday");
	}
	else {
		printf("sunday");
	}
	return 0;
}
*/

	
/*#include<stdio.h>
int main(){
	int sp, cp, profit,profit_percentage;
	printf("enter value sp : ");
	scanf("%d",&sp);
	printf("enter value cp : ");
	scanf("%d",&cp);
	profit=sp-cp;
	profit_percentage=((profit*100)/sp);
	if(sp>cp){
		printf("profit_percentage: %d",profit_percentage);
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
	int cp,sp,loss;
	float loss_percentage;
	printf("enter value cp : ");
	scanf("%d",&cp);
	printf("enter value sp : ");
	scanf("%d",&sp);
	if(sp<cp){
	loss=cp-sp;
	loss_percentage=((loss*100)/cp);
		printf("%.1f",loss_percentage);
	
	}
	else{
		printf("Invalid");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int side,square;
	printf("enter value side : ");
	scanf("%d",&side);
	if(side*side==square){
		printf("%s","square");
	}
	else{
		printf("%s","rectangle");
	}
	return 0;
}
*/

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

		





