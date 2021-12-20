#include<stdio.h>
main()
{
	int i=1,n,s=0;
	printf("Enter a value for n:  ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		s=s+i;
		i=i+1;
	}
	printf("Sum of first n nautral number=%d",s);
	return 0;
}
