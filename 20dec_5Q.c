#include<stdio.h>
main()
{
	int a,n,r=0;
	scanf("%d",&a);
	while (a>0)
	{
		n=a%10;
		r=r*10+n;
		a=a/10;
	}
	printf("%d",r);
}
