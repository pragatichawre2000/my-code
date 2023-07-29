//Hollow pattern

/*#include<stdio.h>		//   *
int main() 			//   *
{				//   *
	int i,j, n;		// ******
	scanf("%d",&n);		//   *
	for(i=1; i<=n; i++)	     *
	{			//   
		for(j=1; j<=n; j++)
		{
			if(j==3 || i==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/



/*#include<stdio.h>		//   ******
int main() 			//   *	  *
{				//   *	  *
	int i,j, n;		//   ******
	scanf("%d",&n);		   
	for(i=1; i<=n; i++)	   
	{			  
		for(j=1; j<=m; j++)
		{
			if(j==3 || i==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/

/*#include<stdio.h>	//1
int main()		//01
{			//101
	int n;		//1010
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1;j<=i; j++)
		{
			if((i+j)%2==0==0)
			{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	printf("\n");
	return 0;
}
*/

/*#include<stdio.h>
int main()					 //   *												
{						//   **
	int n;				       //   ***
	scanf("%d",&n);			      //   ****
	for(int i=1; i<=n; i++)		     //   *****
	{
		for(int j=1; j<=n-1;j++)
		{
			Printf(" ");
		}
		for(int k=1; k<=i; k++)
		{
			printf("*");
		}
		printf("\n")
	} 
	return 0;
	
}
*/	

/*#include<stdio.h>			//	*
int main()			    //        * * *
{				//	    * * * * *	
	int n;			//	      * * *
	scanf("%d",&n);		//		*
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=2*i-1; j++)
		{
			printf("%d","*");
		}
		printf("\n");
	}
	return 0;
}
*/
		
		
/*#include<stdio.h>
int main()				//  		1
{					//	       123
	int n;				//	      12345
	scanf("%d",&n);			//	       123
	for(int i=1; i<=n; i++)		//		1
	{
		for(int j=1; j<=i; j++) 
		{
			printf("%d",j);
		}
		for( int k=1; k<=i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}






#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int nst=1;
	for(int i=1; i<=n; i++)
	{
		for(int k=1; k<=n-i

















