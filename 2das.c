//Duplicate NUMBER				(f232)				
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[6];
	int p[n];
	int R=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		int c=0;
		for(int j=0; j<i; j++)
		{
			if(a[i]=a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			p[R]=a[i];
			R++;
		}
	}
	for(int i=0; i<R; i++)
	{
		printf("%d",p[i]);
	}
	return 0;
}	 
*/

// Uniq  number  
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	int p[n]; 
	for(int i=0; i<n; i++)
	{
		int c=0;
		for(int j=0; j<n;  j++)
		{
			if(A[i]==A[j])
			{
				c++;
			}
		}
		if(c==1)
		{
 			printf("%d",A[i]);
 		}
 	}
 	return 0;
 }
*/	
	
//Sorted Union & Insersetion
/*#include<stdio.h>
int main()
{	
	int n,m;
	scanf("%d%d",&n,&m);
	int A[6]={1,2,3,4,5,6};
	int B[6]={1,3,6,7,8,11};
	int U[n+m];
	int P[n+m];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(A[i]==B[j])
			{
				P=P+A[i];
				i++;
			}
			else if(A[i]<B[j])
			{
				U=U+A[i];
				i++;
			}
			else
			{
				U=U+B[j];
			}
		}
		for(int i=0; i<m; i++);
		{
			U=U+A[i];
			i++;
		}
		else
		{
			printf("%d%d",U[i],P[i]);
		}
	}
	for(int j=0; j<n; j++)
	{
		U=U+B[i];
	}

	printf("%d%d",U[i],P[i]);
	
	return 0;
}
*/
	
/*#include<stdio.h>
int main()
{	
	int n,m;
	scanf("%d%d",&n,&m);
	int A[6]={1,2,3,4,5,6};
	int B[6]={1,3,6,7,8,11};
	int U[n+m];
	int P[n>m];
	int uindex=0, pindex=0;
	int i=0, j=0;
	while(i<m && j<n)
	{
		if(A[i]==B[j])
		{
			P[pindex++]=A[i];
			U[uindex++]=A[i];
			i++;
			j++;
		}
		else if(A[i]<B[j])
		{
			U[uindex]=A[i];
			i++;
		}
		else
		{
			U[uindex++]=B[j];
			j++;
		}
	}
	while(i<m)
	{
		U[uindex++]=A[i];
		i++;
	}
	while(j<n)
	{
		U[uindex++]=B[j];
		j++;
	}
	printf("UNION: ");
	for(int k=0; k<pindex; k++)
	{
		printf("%d",P[k]);
	}
	return 0;
}
*/
		
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int A[6] = {1, 2, 3, 4, 5, 6};
    int B[6] = {1, 3, 6, 7, 8, 11};
    int U[n + m];
    int P[n > m ? m : n]; // The maximum size of the intersection can be the smaller array size

    int uIndex = 0, pIndex = 0;

    int i = 0, j = 0;
    while (i < m && j < n) {
        if (A[i] == B[j]) {
            P[pIndex++] = A[i];
            U[uIndex++] = A[i];
            i++;
            j++;
        } else if (A[i] < B[j]) {
            U[uIndex++] = A[i];
            i++;
        } else {
            U[uIndex++] = B[j];
            j++;
        }
    }

    while (i < m) {
        U[uIndex++] = A[i];
        i++;
    }

    while (j < n) {
        U[uIndex++] = B[j];
        j++;
    }

    printf("Union: ");
    for (int k = 0; k < uIndex; k++) {
        printf("%d ", U[k]);
    }

    printf("\nIntersection: ");
    for (int k = 0; k < pIndex; k++) {
        printf("%d ", P[k]);
    }

    return 0;
}	
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
					
	 
