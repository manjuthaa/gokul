#include<stdio.h>
int main()
{
	int a,b,c,d=1;
	scanf("%d",&a);
	while(a!=0)
	{
	c=a%10;
	d=d*c;
	a=a/10;
	}
	printf("%d",d);
	return 0;
}
