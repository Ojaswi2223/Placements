#include <stdio.h>

int main(int argc, char const *argv[])
{
	int revnum=0,ldigit,n,m;
	printf("Enter the number : ");
	scanf("%d",&n);
	m=n;
	while(n != 0)
	{
		ldigit = n%10;
		revnum = revnum*10 + ldigit;
		n=n/10;
	}
	if(m == revnum)
		printf("The number is palindrome\n");
	else
		printf("The number is not palindrome\n");
	return 0;
}