//sumodd and sumodd number difference
/*#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int sumeven=0;
	int sumodd=0;
	for(int i=0; i<=6; i++)
	{
		if(i%2==0)
		{
			sumeven +=arr[i];
		}
		else
		{
			sumodd+=arr[i];
		}
	}
	printf("%d\n",sumeven-sumodd);
	return 0;
}
*/
 
 //sum 2 pairs
/*#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int totalpair=0;
	int x=12;
	for(int i=0; i<=7; i++)
	{
		for(int j=i+1; j<=7; j++)
		{
			if(arr[i]+arr[j]==x)
			{
				totalpair++;
			}
		}
	}
	printf("%d",totalpair);
	return 0;
}
*/	

/*#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int totalpair=0;
	int x=12;
	for(int i=0; i<=7; i++)
	{
		for(int j=i+1; j<=7; j++)
		{
			if(arr[i]+arr[j]==x)
			{
				totalpair++;
				printf("(%d,%d)\n",arr[i],arr[j]);
			}
		}
	}
	printf("%d",totalpair);
	return 0;
}
*/

//triplets
/*#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int totaltriplete=0;
	int x=12;
	for(int i=0; i<=7; i++)
	{
		for(int j=i+1; j<=7; j++)
		{
			for(int k=j+1; k<=7;k++)
			{
				if(arr[i]+arr[j]+arr[k]==x)
				{
					totaltriplete++;
					printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	printf("%d",totaltriplete);
	return 0;
}
*/

//secound largest
/*#include<stdio.h>
#include<limit.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int max=int_min;
	int smax = INT_min;
	for(int i=0;i<=6;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(smax<arr[i]&&max!=arr[i])
		{
			smax=arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}	
*/

/*#include<stdio.h>
int main()
{
	int arr[5]= {2,3,5,4,6};
	for(int i=0; i<=0; i++)
	{
		if(max<arr[i])
		{
			smax=max;
			max=arr[i];
		}
		
*/

//contents array another reverse order **
/*#include<stdio.h>
int main()
{
	int arr[6]={3,4,4,5,6,7};
	int brr[7];
	for(int i=0; i<=6; i++)
	{
		brr[i]=arr(6-1);
	}
	for(int i=0; i<=6; i++)
	{
		printf("%d"n,brr[i];
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{





	
