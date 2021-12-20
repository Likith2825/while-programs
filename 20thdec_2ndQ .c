#include<stdio.h>
main()
{
	int n,i=1,m=1;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		m=m*i;
		i=i+1;
	}
	printf("%d\n",m);
	return 0;
}
