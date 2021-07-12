#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i = 1;i <= n; i++)
	{
		for (j = 1;j <= (2*n-1); j++)
		{
			/* code */
			if( j>=n-(i-1) && j<=n+(i-1))
				printf(" * ");
			else
				printf("   ");
		}
		printf("\n");
	}
	return 0;
}