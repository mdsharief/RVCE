#include<stdio.h>
void linear(int n,int a[]);
void binary(int n,int a[]);
void main()
{
int n,a[20],i,key,ch;
printf("Enter The Size Of An Array : " );
scanf("%d",&n);
printf("Enter %d Elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(1)
{
printf("Enter The Search Type : \n");
printf("\n 1.Linear \n");
printf("\n 2.Binary \n");
scanf("%d",&ch);
switch(ch)
{
case 1: linear(n,a);
	break;
case 2: binary(n,a);
	break;
default: printf("Invalid Choice");
}
}
}
void linear(int n,int a[])
{
int i,key,flag;
printf("Enter The Element to search : ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("%d number is found",key);
}
if(a[i]!=key)
printf("Element Not found");
}
}
void binary(int n,int a[])
{
int low,high,mid,key;
printf("Enter The Element to search : ");
scanf("%d",&key);
low=0;
high=n-1;
while(high>=low)
{
mid=(low+high)/2;
if(a[mid]<key)
{
low=mid+1;
}
else if(a[mid]==key)
{
printf("%d Element Found",key);
}
else if(a[mid]>key)
{
high=mid-1;
}
else
{
printf("Element Not Found");
}
}
}
