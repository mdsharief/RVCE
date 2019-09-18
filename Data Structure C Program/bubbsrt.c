#include<stdio.h>
int main()
{
	int i,j,a[20],n,temp;
	printf("Enter The Number Of Element : \n");
	scanf("%d",&n);
	printf("Enter The Element : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Elements Are : \n");
	for(i=0;i<n;i++)
	printf("\t %d\n",a[i]);
}
