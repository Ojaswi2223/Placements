#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int res=0;
	int ldigit,n,m,order=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	m=n;
	while(m != 0)
	{
		order++;
		m=m/10;
	}
	printf("%d\n",order);
	m=n;
	while(m!= 0)
	{
		ldigit = m%10;
		res = res+ (int)pow(ldigit,order);
		m=m/10;
	}
	printf("%d\n",res);
	if(n == res)
		printf("The number is amstrong\n");
	else
		printf("The number is not amstrong\n");
	return 0;
}
