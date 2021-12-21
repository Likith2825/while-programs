#include<stdio.h>
main()
{
	int P,a,n,r=0;
	scanf("%d",&a);
	P=a;
	while (a>0)
	{
		n=a%10;
		r=r*10+n;
		a=a/10;
	}
	if(P==r)
	{
		printf("Number is pallindrone");
	}
	else
	{
		printf("numer is not pallidrone");
	}
}
