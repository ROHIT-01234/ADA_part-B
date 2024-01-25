#include<stdio.h>
void warshal(int cost[10][10], int n)
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cost[i][j]=cost[i][j]||(cost[i][k]&&cost[k][j]);
				
		    }
	    }
	}
	printf("All Pairs Shortest Path is :\n");
		for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		printf("%d ",cost[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
    int n,cost[10][10];
	printf("Enter the no. of vertices: ");
	scanf("%d",&n);
	
	printf("Enter the values:\n");
	for(int i=0;i<n;i++)
	{
	    for (int j=0;j<n;j++)
	    {
	        scanf("%d",&cost[i][j]);
	    }
	}
	
	printf("Given Matrix: \n");
	for(int i=0;i<n;i++)
	{
	    for (int j=0;j<n;j++)
	    {
	       printf("%d\t",cost[i][j]);
	    }
	    printf("\n");
	}
	
	warshal(cost,n);
}
