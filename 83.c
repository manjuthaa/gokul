#include <stdio.h>

int main(void) {
	int a,b,c;
	char d;
	scanf("%c%d%d",&d,&a,&b);
	if(d=='/')
	{
			c=a/b;
		printf("%d",c);
	}
	else
	{
	c=b%a;
	            printf("%d",c);
	}
	return 0;
}
