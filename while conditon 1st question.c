#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter a value for n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+1;
	}
	return 0;
}
