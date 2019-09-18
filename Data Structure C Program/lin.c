#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int linear(int a[],int range,int s)
{
 int i,pos=0;
 for(i=0;i<range;i++)
 {
  if(a[i]==s)
   {
    pos=i+1;
    break;
   }
 }
 return pos;
}

int binary(int a[],int range,int s)
{
 return sort(a,0,range-1,s);
}

int sort(int a[],int s,int e,int se)
{
 int m=(s+e)/2;
 if(s<=e)
	{
	 if(a[m]==se)
	 return m+1;
	 else if(se<a[m])
	 sort(a,m+1,e,se);
	 else
	 sort(a,s,m-1,se);
	}
	 else
	 return -1;
}
void main()
{

 int a[MAX],range,se,pos,i,ch;
 printf("enter range :");
 scanf("%d",&range);
 for(i=0;i<range;i++)
 {
  printf("\nenter value %d : ",i+1);
  scanf("%d",&a[i]);
 }
 while(1)
 {
  printf("\n1.linear\n2.binary\n3.exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("\nenter no to search :");
	   scanf("%d",&se);
	   pos=linear(a,range,se);
	   if(pos==0)
	   {
	    printf("element not found\n");
	   }
	   else
	   printf("element found at location %d",pos);
	   break;

   case 2: printf("\nenter a number to search : ");
	   scanf("%d",&se);
	   pos=binary(a,range,se);
	   if(pos==-1)
	   printf("key not found\n");
	   else
	   printf("key found at %d",pos);
	   break;

   case 3: exit(0);
	   break;
  }
 }
}
