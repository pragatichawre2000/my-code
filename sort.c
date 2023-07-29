//LINEAR SEARCH       (f
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i=0; i<=n; i++)
	{
		if(arr[i]==m)
		{
			printf("%d",m);
		}
	}
	if(i>n)
	{
		printf("not found\n");
	}
	return 0;
}
*/

//Binary search
/*#include<stdio.h>
int main()
{
	int arr[5] ={5,4,3,2,1}:
	int n=5;
	for(int i=0; i<n-1; i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[j]>arr[j+1];
			{
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n");
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[j]);
	
	}
	return 0;
}		
*/

//Bubble sort  (Assending order)
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int q=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}	
	return 0;
}
*/	
 

//Bubble sort  (dessending order)
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j]<arr[j+1])
			{
				int q=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}	
	return 0;
}
*/

//linear search
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i=0; i<n; i++)
	{
		if(arr[i]==m)
		{
			printf("%d",m);
			return 0;
		}
	}
	return 0;
}
*/	


//Selection sort (Dessending order)
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=j+1; j<n; j++)
		{
			if(arr[i]<arr[j])
			{
				int q=arr[i];
				arr[i]=arr[j];
				arr[j]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/

//Selection sort(assending orde)
/*
#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=j+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				int q=arr[i];
				arr[i]=arr[j];
				arr[j]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/

//Binary search
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int l=0, h=n-1;
	int m;
	scanf("%d",&m);
	while(l<=h)
	{
		int midvalue=l+(h-l)/2;
		{
			if(arr[midvalue]==m)
			{
				printf("%d",midvalue);
				return 0;
			}
			else if(arr[midvalue]<m)
			{
				l=midvalue+1;
			}
			else
			{
				h=midvalue-1;
			}
		}
	}
	printf("Element not found");
	return 0;
}
*/		

//Insertion search  (Dessending  order)
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i; j>0; j--)
		{
			if(arr[j-1]>arr[j])
			{
				int a=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=a;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}*/

//INSERTION SORT (assending order)
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i; j>0;j--)
		{
			if(arr[j-1]>rr[j])
			{
				int a=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=a;
			}
		}
		else 
		{
			Breal;
		}
		
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
		
	}
	return 0;
}	
*/		


/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=j+1; j<n; j++)
		{
			if(arr[i]<arr[j])
			{
				int q=arr[i];
				arr[i]=arr[j];
				arr[j]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=j+1; j<n; j++)
		{
			if(arr[i]<arr[j])
			{
				int q=arr[i];
				arr[i]=arr[j];
				arr[j]=q;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/

//2d array addition 
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],arr2[n],sum[n];
	printf("enter the value : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0; i<n; i++)
	{
		sum[n]=arr[i]+arr2[i];
	}
	printf("Resultant array after addition : ");
	for(int i=0; i<n; i++)
	{
		printf("%d",sum[i]);
	}
	return 0;
}
*/
	
	
	





















			
	
