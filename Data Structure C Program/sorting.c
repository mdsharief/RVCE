#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//function prototypes
void bubble(int a[],int n);
void selection(int a[],int n);
void insertion(int a[],int n);


void main()
{
  int i,j,a[200],n,ch,temp;
  printf("Enter the size of the list: ");
  scanf("%d",&n);
  printf("\nRandom Numbers Are Generated!!\n");
for(i=0;i<n;i++)
a[i]=rand()%100;
scanf("%d",&a[i]);
printf("Array Elements : ");
for(i=0;i<n;i++)
	printf("%d \n",a[i]);


//Creates Menu for the user 
while(1)
{
printf("\n\nMenu:\n\n");
printf("\n 1.Bubble sort\n\n2.Selection Sort\n\n3.Inserton sort\n\n4.Exit\n\nYour choice: \n");
scanf("%d",&ch);

switch(ch)
{
  case 1: //performs bubble sort
          bubble(a,n);
          break;

  case 2: //performs selection sort
          selection(a,n);
          break;
  
  case 3: //performs insertion sort
          insertion(a,n);
          break;

  case 4: exit(1);
	  break;

  default: printf("Invalid option\nRetry\n ");
  }
 }
}
void bubble(int c[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
   {
     for (j=0;j<n-1-i;j++)
      {
        if (c[j] > c[j+1])
          {
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
          }
      }
   }
  printf("\nSorted list in ascending order:\n");
  for (i=0;i<n;i++ )
  printf("\t %d",c[i]);
  printf("\n");
}

void selection(int c[],int n)
{

 int i,j,temp,min;
 for(i=0;i<n-1;i++)
  {
     min=i;
     for(j=i+1;j<=n-1;j++)
      if(c[j]<c[min])
       min=j;
temp=c[i];
c[i]=c[min];
c[min]=temp;
}
printf("Sorted list is:");
for(i=0;i<n;i++)
printf("\t %d",c[i]);
}

void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
	 if (a[i] > a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
      }
   }
  printf("Sorted list is: ");
  for(i=0;i<n;i++)
  printf("\t %d",a[i]);
}
