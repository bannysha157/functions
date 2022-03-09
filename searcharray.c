#include<stdio.h>
#define size 50 //marco
void search(const int ,int *,int);
int main()
{
	int y,n;
	int a[size],i;
	printf("size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched:");      	        
	scanf("%d",&y);
	void (*fp)(const int,int *,int);//size ,int *= array,int= how elements 
	fp=search;
	fp(n,a,y);
	return 0;
}
void search(const int n,int *a, int y)
{
	int ele,i;//ele=element
	for(i=0;i<n;i++)
	{
		if(y==a[i])
		{
			ele=1;
			break;
		}
	}
	if(ele==1)
	{
		printf("%d is present in the array",y);    
	} 
	else 
	{  
	       	printf("%d is not present in the array",y); 
	}
}
