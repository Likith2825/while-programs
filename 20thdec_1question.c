#include<stdio.h>
main()
{
	int n,i=1,s=0,sq;
	printf("Enter a natural number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sq=i*i;
		s=sq+s;
		i=i+1;
	}
	printf("%d",s);
	return 0;
}
