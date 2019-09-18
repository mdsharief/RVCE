#include<stdio.h>

int main()
{
	int i,a[100],n;
	printf("\n Enter The Number Of Elements:");
	scanf("%d",&n);
	printf("\n Enter The Array Elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("\n \n Sorted Arrays Are :\n ");
	for(i=0;i<n;i++)
		printf("\t %d",a[i]);
}

int insertion_sort(int a[],int n)
{
	int pass,k,temp,j;
	for(pass=1;pass<n;pass++)
	{
		k=a[pass];
		for(j=pass-1;j>=0 && k<a[j];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=k;
	}
	return;
}
