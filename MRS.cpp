#include <stdio.h>
int main()
{
	int maxmin,min,a,i,j,m,n,t[100][100];
	scanf("%d %d",&m ,&n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
	maxmin=t[0][0];
	for (int i = 0; i < n; ++i)
	{
		if (t[0][i]<maxmin)
		{
			maxmin=t[0][i];
		}
	}
	a=0;
	for (int i = 0; i < m; ++i)
	{
		min=t[i][0];
		for (int j = 0; j < n; ++j)
		{
			if (t[i][j]<min)
			{
				min=t[i][j];
			}
 
		}
		if (min>maxmin)
		{
			maxmin=min;
		}
	}
	printf("%d\n",maxmin );
}
 