#include<stdio.h>
main()
{
	int i=1,m=1,n;
	printf("enter a number: ");
	scanf("%d",&n);
	while(i<=10)
	{
		m=n*i;
		printf("\n%d * %d = %d",n,i,m);
		i=i+1;
	}
	return 0;
}
