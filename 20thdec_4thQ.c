#include<stdio.h>
main()
{
	int n,o,t,s;
	printf("enter a number");
	scanf("%d",&n);
	o=n%10;
	t=n/10;
	s=t+o;
	printf("%d",s);
}
