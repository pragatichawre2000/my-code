//natural number till 20 print 			(f198)

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		int a;
		scanf("%d",&a);
		arr[i] = a;
	}
	printf("%d",arr[n-1]);
	return 0;
}
*/
//natural number currect code
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1; i<=n; i++)
	{
		
		arr[i] = i;
	}
	for(int i=1; i<=n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/

// 5 names			(f199)
/*#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char name[5][100];
	for(int i=0; i<5; i++){

	scanf("%s",name[i]);
	}
	printf("enter five names:\n");
	
	for(int i=0; i<5; i++)
	{
		printf("%s\n",name[i]);
		
	}
	return 0;
}
*/	

//reverse number			(f200)
/*#include<stdio.h>
int main()
{	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		int a;
		scanf("%d",&a);
		arr[i]=a;
	}
	for(int j=n-1; j>0; j--)
	{
		printf("%d",arr[j]);
	}
	return 0;
}
*/

//alternate elements			(f201)
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		int a;
		scanf("%d",&a);
		arr[i]=a;
	}
	for(int j=0;j<n;j=j+2)
	{
		printf("%d",arr[j]);
	}
return 0;
}
*/


//last i elements	(f202)		
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
	printf("Enter no. you want");
	int p;
	scanf("%d",&p);
	printf("{");
	for(int j=p; j<n; j++)
	{
		printf("%d ",arr[j]);
	}
	printf("}");
return 0;
}	
*/

//sum of average		(f205)**
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
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum=sum+arr[i];
	}
	int avg=sum/n;
	printf("%d\n",avg);
	return 0;
}
*/
	
/*#include <stdio.h>
int main()
{                                      //fc203
    int n, p;
    scanf("%d", &n);
    int arr[n];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &p);
    for (int i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("Number exists in the array.\n");
    }
    else
    {
        printf("Number does not exist in the array.\n");
    }
    return 0;
}	
*/

// count occurrence Number	(f206)**
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
	int m,
	int count=0;
	Printf("Enter the value of number m : ");
	scanf("%d",&m);
	for(int i=0; i<n; i++)
	{
		if(arr[i]==m)
		{
			count=count+1;
		}
	}
	printf("%d\n", count);
	return 0;
}
*/	 

//Consecutive number	(f204)**
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int arr2[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int p=arr2[0];
	for(int i=0; i<n; i++)
	{
		arr[i]=p;
		p=p+1;
	}
	
	//int arr2[i], i;
	if(arr[i]==arr2[i])
	{
		printf("consecutive number\n");
	}
	else
	{
		printf("not consecutive number\n");
	}
	return 0;
}*/

//currect conswcutive number
/*#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int c=0;
	for(int i=0;i<n;i++)
	{
		int b;
		scanf("%d",&b);
		arr[i]=b;
		
	}
	int brr[n];
	int i=0;
	int s=arr[i];
	for(int j=0;j<n;j++)
	{
		brr[j]=s;
		s=s+1;
	}
	for(int i=0;i<n;i++){
	if(arr[i]==brr[i])
	{
	c=c+1;
	}
	}
	if(c==n)
	{
		printf("Number is consecutive\n");
	}
	else
	{
		printf("Not consecutive\n");
	}
	return 0;
}
*/
	
//negative positive elements count   (f207) **
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[i];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int pc=0;
	int nc=0;
	int arr[i];
	for(int i=0; i<n; i++)
	{
		if(arr[i]>=0)
		{
			pc=pc+1;
		}
		else 
		{
			nc=nc+1;
		}
	}
	printf("%d\n%d\n",pc,nc);
		
	return 0;
}
*/


//even number 			(f209)**
/*#include<stdio.h>
int main()		
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int c=0; c<=n; i++)
	{
		if(i%2==0)
		{
			c=c+1;
			
		}
	
	}
	printf("%d ",arr[i]);
	return 0;
}
*/

//odd number n number		(f210)**
/*#include<stdio.h>
int main()		
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<=n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int i=0;
	int arr[n];
	for(int c=0; c<=n; i++)
	{
		if(i%2!=0)
		{
			c=c+1;
			
		}
		printf("%d ",arr[i]);
	}
	return 0;
}*/		
	

// factors n number	(f211)
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            arr[count] = i;
            count++;
        }
    }
    
    printf("Factors of %d: ", n);
    
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
*/

//facter
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[i];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1; i<=n; i++)
	{
		if(n % arr[i]==0)
		{
			arr[i]=arr[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/

// prinme number		(f212)
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
		int count=0;
		for(int j=1; j<=arr[i]; j++)
		{
			if(arr[i]%j==0)
			{
				count++;
			}
		}
	 	if(count==2)
		{
			printf("%d ",arr[i]);
		}
		
	}
	return 0;
}
*/
		
//perfect number    	(f213)	
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
		int sum=0;
		for(int j=1; j<arr[i]; j++)
		{
			if(arr[i]%j==0)
			{
				sum+=j;
			}
		}
		if(sum==arr[i])
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}			
*/

//armstrong number 			(f214)
/*#include<stdio.h>		
int main()
{
	int n;
	printf("Enter the number of n : ");
	scanf("%d",&n);
	
	int arr[n];
	int c = 0;
	
	for(int i=1; i<=n; i++)
	{	
		int p = i;
		int sum = 0;
		
		while (p > 0)
		{
			int r = p % 10;
			sum = sum + r * r * r ;
			p = p / 10;
		}
		if( sum == i)
		{
			arr[c] = i;
			c++;
		}
	}
	printf("Armstrong  number up to %d: ",n); 
	for(int i = 0; i < c ; i++)
	
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/			

//factorial number		(f215)
/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    int factorial = 1;
    for (int i = 0; i < n; i++)
    {
        factorial = factorial * (i + 1);
        arr[i] = factorial;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
*/
	
//even number, odd number sum   (f217)
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
	int ods=0;
	int evs=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			evs=evs+arr[i];
		}
		else
		{
			ods=ods+arr[i];
		}
	}
	printf("%d %d",ods,evs);
	return 0;
}
*/

//even odd number count (f216)
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
	int evc=0;
	int odc=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			evc=evc+1;
		}
		else
		{
			odc=odc+1;
		}
	}
	printf("%d %d",evc,odc);
	return 0;
}
*/

			
//rearrange  the elements reverse order		(f220)
/*#include<stdio.h>
int main()
{
	int n;
	printf("enter the the value elements : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr2[n];
	for(int i=0; i<n; i++)
	{
		arr2[i]=arr[n-i-1];
	}
	for(int i=0 ;i<n;i++){
	printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}
*/


//100 natural number reverse sequence		(f222)
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for(int i = n; i >= 1; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
*/	
	
// maximum nuber  				(f221)
/*#include<stdio.h>
int main()
{
	int n, max=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d\n",max);
	return 0;
}
*/
	
//babies weight			(f223)		
//mean weight
//maximum weight
//minimum weight	
/*#include<stdio.h>
int main()
{
	int n, sum=0,mean;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	mean=sum/n;
	printf("%d\n",mean);
	int max=arr[0], min=arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d %d %d",mean,max,min);
	return 0;
}*/
			
		

		
		
	
	
	
		 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

