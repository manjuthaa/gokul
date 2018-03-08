#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
			c=a-b;
		printf("diff is:%d",c);
	}
	else
	{
	c=b-a;
	            printf("diff is:%d",c);
	}
	return 0;
}
