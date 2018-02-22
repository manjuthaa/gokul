#include <stdio.h>

int main(void) {
int m=0,n=1,a,b;
scanf("%d",&b);
while(b=!0)
{
	a=m+n;
	printf("%d",a);
	m=n;
	n=a;
	b--;
}
return 0;
}
