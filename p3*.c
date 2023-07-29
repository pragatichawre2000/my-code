/*#include<stdio.h> 					//*****
int main()		 				//*****
{	 						//*****						
	int i,j,n; 					//*****
	scanf("%d",&n); 				//*****
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h> 					//*
int main()		 				//**
{	 						//***						
	int i,j,n; 					//****
	scanf("%d",&n); 				//*****
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h> 					//*****
int main()		 				//****
{	 						//***						
	int i,j,n; 					//**
	scanf("%d",&n); 				//*
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
*/

							//*
							//**
							//***
							//****
							//*****
/*#include<stdio.h> 					//*****
int main()		 				//****
{	 						//***						
	int i,j,n; 					//**
	scanf("%d",&n); 				//*
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	{
		for( i=n-1;i>=1; i--)
		{
			for(j=1; j<=i; j++)
			{
				printf("* ");
			}
		printf("\n");
		}
	}	
		
		 
	return 0;
}
*/

/*#include<stdio.h>				//#
int main()					//##						
{						//###
	int i,j,n;				//####
	scanf("%d",&n);				//#####
	for(i=1;i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("#");
	 	}
	 	printf("\n");
 	}
 	return 0;
 }
*/
 	
	
#include<stdio.h>				//#
int main()					//##						
{						//###
	int i,j,n;				//####
	scanf("%d",&n);				//#####
	for(i=1;i<=n; i++)
	{	
		printf((n-i) * (" "));
	
		for(j=i; j<=i; j++)
		{
			printf("* "  *  i);
	 	}
	 	printf("\n");
 	}
 	return 0;
 }

















