#include<stdio.h>
int main()
{
	int i,a[100],k,n,pos=0,temp;
	printf("Enter The Number of Element : \n");
	scanf("%d",&n);
	printf("Enter The Elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(k=0;k<n;k++)
	{
		pos=min(a,k,n);
		temp=a[k];
		a[k]=a[pos];
		a[pos]=temp;
	}
	printf("The Output Is : \n");
	for(i=0;i<n;i++)
		printf("%d \t\n",a[i]);
}
int min(int a[],int k,int n)
{
	int pos,j,min;
	min=a[k];
	pos=k;
	for(j=k+1;j<=n-1;j++)
	{
		if(min>a[j])
		{
			min=a[j];
			pos=j;
		}
	}
	return pos;
}
