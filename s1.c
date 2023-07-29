//basic string
/*#include<stdio.h>
int main()
{
	char arr[5] ={'a','s','d','f','h'};
	printf("%c",arr[1]);
	return 0;
}	
*/

//ACSII VALUE 
/*#include<stdio.h>
int main()
{
	char ch = 'P';
	int x= (int) ch;
	printf("%d",x);
	return 0;
}
*/

//creating character  //pragati
/*#include<stdio.h>
int main()
{
	char arr[7] = {'P','r','a','g','a','t','i'};
	for(int i=0;i<7; i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
*/

//charracter array with null character

//null character
/*#include<stdio.h>
int main()
{
	char arr[] ={'P','R','A','G','A','T','I'};
	char ch ='\0'; //null character
	printf("%d",ch);
	return 0;
}
*/

//**	
/*#include<stdio.h>
int main()
{
	char arr[] ={'P','R','A','G','A','T','I','!'};
	int i=0;
	while(arr[i]!='!')
	{
		printf("%c",arr[i]);
		i++;
	}
	return 0;
}
*/

// Pragati Chaware
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Pragati Yashwantrao Chaware";
	printf("%s",str);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	char str[6] =('P','R','A','T','I');
	char arr[]
*/

// name size
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	puts("Enter a sting");
	scanf("%[^\n]s",str);
	puts("the size of is : ");
	int size =0;
	int i=0;
	while(str[i]!='\0')
	{
		size++;
		i++;
	}
	printf("%d",size);
	return 0;
}
*/	
	

//reverse print
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	puts("Enter a sting");
	scanf("%[^\n]s",str);
	puts("the size of is : ");
	int size =0;
	int k=0;
	while(str[k]!='\0')
	{
		size++;
		k++;
	} 
	for(int i=0, j=size-1; i<=j; i++,j--)
	{
		printf("%d",size);
		char temp = str[i];
		str[i] = str[j];
		str[j]= temp;
	}
	puts("the reverse string is : ");
	puts(str);
	
	return 0;
}	
*/	
	
	
	
	
	
	
	
	
	
	
	
	
	

