#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[10],n,i,j,temp;
int main()
{
	int ch;
	printf("Ente N Values : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%1000;
	printf("Choose A Technique \n");
	do
	{
		printf("\n 1.Bubble Sort\n 2.Selection Sort\n 3.Insertion Sort\n");
		printf("Enter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:bubble();
			       break;
			case 2:selection();
			       break;
			case 3:insertion();
			       break;
			default:exit(0);
		}
	}while(ch);
}
void bubble()
{
	for(i=0;i<n-1;i++)
   {
     for (j=0;j<n-1-i;j++)
     {
        if (a[j] > a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
   }

  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
    printf("\t %d",a[i]);
  printf("\n");
}

void selection()
{
	int pos;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[pos])
				pos=j;
		}
		if(pos!=0)
		{
			temp=a[pos];
            		a[pos]=a[i];
            		a[i]=temp;
		}
	}
	  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
    printf("\t %d",a[i]);
  printf("\n");
}

void insertion()
{
	int pos;
	for(i=1;i<n;i++)
	{
		pos=i;
		while(pos>0 && a[pos-1]>a[pos])
		{
			temp=a[pos];
			a[pos]=a[pos-1];
			a[pos-1]=temp;
			pos--;
			}
	}
	  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
    printf("\t %d",a[i]);
  printf("\n");
}
