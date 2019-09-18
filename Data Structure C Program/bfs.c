#include<stdio.h>
int a[22][22],reach[22],n;
void dfs(int v)
{
	int i;
	reach[v]=1;
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !reach[i])
		{
		printf("%d -> %d",v,i);
		dfs(i);
		}
	}
}

