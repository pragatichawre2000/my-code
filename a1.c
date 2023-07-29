//string number
/*#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("%d",arr[4]);
	return 0;
}
*/	

//float number
/*#include<stdio.h>
int main()
{
	float arr[5] = {3,4,5,6,7.6};
	printf("%f",arr[4]);
	return 0;
}
*/

//character 
/*#include<stdio.h>
int main()
{
	char arr[5] ={'p','n','k','s','y'};
	printf("%c",arr[1]);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int arr[4];
	arr[0]=1;
	arr[1]=3;
	arr[2]=4;
	arr[3]=12;
	arr[4]=19;
	printf("%d",arr[3]);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int arr[5] = {2,4,5,6,7};
	for (int i=0; i<=4;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/

//{4,6,7,8,9,10}
/*#include<stdio.h>
int main()
{
	int arr[5];
	for (int i=0; i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	
		printf("%d",arr[1]);

	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int arr[5];
	for (int i=0; i<=4;i++)
	{
		int a=i+1;
		printf("\nenter element number %d",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<5;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}
*/

//reverse number
/*#include<stdio.h>
int main()
{
	int arr[5];
	for (int i=0; i<=4;i++)
	{
		int a=i+1;
		printf("nenter element number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i>=0;i--)
	{
		printf("%d",arr[i]);
	}

	return 0;
}
*/


//marks less than 35 
/*#include<stdio.h>
int main()
{
	int arr[10] ={24,56,34,55,66,77,88,98,87,79};
	for(int i=0; i<10; i++)
	{
		if(arr[i]<35)
		{
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
*/		
// less than 35 index number	
/*#include<stdio.h>
int main()
{
	int arr[10] ={24,56,34,55,66,77,88,98,31,79};
	for(int i=0; i<10; i++)
	{
		if(arr[i]<35)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
*/

//declaration
/*#include<stdio.h>
int main()
{
	int size = 10,b[size];
	b[0] = 2;
	printf("%d",b[0]);
	return 0;
}
*/

//Address
/*#include<stdio.h>
int main()
{
	int arr[5] ={1,4,5,6,8};
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[1]);
	printf("%p\n",&arr[2]);
	printf("%p\n",&arr[3]);
	printf("%p\n",&arr[4]);
	return 0;
}
*/

//predict the output
//swaping num[0]=num[25]
/*#include<stdio.h>
int main()
{
	int num[25],temp;
	num[0]=100;
	num[25]=200;
	temp=num[25];
	num[25]=num[0];
	num[0]=temp;
	printf("%d\n%d",num[0],num[25]);
}
*/	

//1---49	
/*#include<stdio.h>
int main()
{
	int arr[50],i;
	for(i=0; i<=48;i++)
	{
		arr[i]=i;
		printf("\n%d",arr[i]);
	}
	return 0;
}
*/

//Garbage value		
/*#include<stdio.h>
int main()
{
	int arr[4];
	printf("%d", arr[0]);
	return 0;
}
*/
	
/*#include<stdio.h>
int main()
{
	int x;
	
	printf("%d", x);
	return 0;
}
*/	



/*#include<stdio.h>
int main()
{
	int i, a=2,b=3;
	int arr[2+3];
	for(i=0; i<a+b;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n%d",arr[i]);
	}
	return 0;
}
*/	

//sum of elements in array n input
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for(int i=0,i<=n-1)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(int i=0; i<=n-1; i++)
	{
		printf("%d",sum
	}
	return 0;
}
*/

//sum of array
/*include<stdio.h>
int main()
{
	int arr[5]={3,4,5,6,7};
	int sum =0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}
*/

//nput n declare
/*#include<stdio.h>
int main()
{	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<=n-1; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<=n-1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/


/*include<stdio.h>
int main()
{
	int arr[5]={3,4,5,6,7};
	int prod=1;
	for(int i=0;i<=4;i++)
	{
		prod=prod*arr[i];
	}
	printf("%d",prod);
	return 0;
}
*/

//maximum value out of all the elsements in array
/*include<stdio.h>
int main()
{	
	int arr[7] ={2,3,4,64,6,33,6};
	int max=arr[i];
	for(int i=0;i<=6;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	fun(int arr[])
	{
		arr[0]=10;
		return 0;
	
	}
	int main()
	{
		int arr[5]={1,2,3,4,5};
		fun(arr);
		printf("%d\n",arr[0]);
		return 0
	}
}
*/

/*#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	for(int i=0; i<=6; i++)
	{
		if(i%2!=0) 
		{
			arr[i]*=2;
		}
		else
		{
			arr[i]+=10;
		}
		
	}
	for(int i=0; i<=6; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
*/		
		




		


