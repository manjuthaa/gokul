#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		if(b%a==0)
		{
			printf("%d\t",a);
		}
	}
	return 0;
}
