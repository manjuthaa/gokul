#include <stdio.h>

int main(void) {
	int a,n,d,c;
	scanf("%d%d%d",&a,&n,&d);
	printf("%d\n%d\n%d",a,n,d);
	c=2*a+(n-1)*d;
	printf("\n%d",c);
	return 0;
}
