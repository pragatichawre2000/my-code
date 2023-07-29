// 2d array print 				//1 2 3								
/*#include<stdio.h>				//1 2 3
int main()					//1 2 3
{
	int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
*/

/*#include<stdio.h>				//1 2 3
int main()					//1 2 3
{
	int r;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	int c;
	printf("enter the number of colums : ");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}
*/

//roll number marks obtained by 4 student side by side matrix
/*#include<stdio.h>
int main ()
{
	int t;
	scanf("%d",&t);
	int arr[r][c];
	for(int i=0; i<r;i++);
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
	printf("\n");
	return 0;
}
*/


//add two matrics	
/*#include<stdio.h>
int main()
{
	int arr[2][2]={1,2,3,4};
	int brr[2][2]={5,6,7,8};
	printf("\n");
	int res[2][2];
	for(int i=0; i<2; i++)
	{
		for(int j=0;j<2;j++)
		{
			res[i][j] =arr[i][j] +brr[i][j];
		}
	}
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

//SUM MATRIX 	
			
/*#include<stdio.h>
int main()
{
	int r;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	int c;
	printf("Enter the number of column : ");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d ",arr
			[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("the sum of the given matrix is %d", sum);
	return 0;
}
*/

//zero one .c
/*#include<stdio.h>
int main()
{

	int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
	int maxcount=0;
	for(int i=0; i<3; i++)
	{
		int count=0;
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==1)
			count++;
		}
		if(maxcount<count)
		{
			maxcount=count;
		}
		printf("\n");
	}
	printf("%d",maxcount);
	return 0;
}
*/

//index zero

/*#include<stdio.h>
int main()
{

	int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
	int maxcount=0;
	int maxidx=-1;
	for(int i=0; i<3; i++)
	{
		int count=0;
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==1)
			count++;
		}
		if(maxcount<count)
		{
			maxcount=count;
			maxidx=i;
		}
		printf("\n");
	}
	printf("%d",maxidx);
	return 0;
}
*/


#inclt main()ude<stdio.h>
int main()
{
	int r;
	printf("enter the number of rows : ");
	scanf("%d",&r);
	int c;
	printf("enter the number of column : ");
	scanf("%d",&c);
	printf("inter all the elements\n");
	int arr[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c,j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r; i++)
	{
		for(int j=0; j<r; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	











