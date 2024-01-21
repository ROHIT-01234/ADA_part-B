#include<stdio.h>
void warshall(int a[4][4], int n)
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
				
		    }
	    }
	}
	printf("All Pairs Shortest Path is :\n");
		for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		printf("%d ",a[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
	int cost[4][4] = {{0, 1, 0, 0}, {0, 0,  0, 1}, {0, 0, 0, 0}, {1, 0, 1, 0} }; 
	int n = 4;

	warshall(cost,n);
}
