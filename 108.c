#include <stdio.h>

int main(void) {
	int A,B,C,a,n,d,c;
	scanf("%d%d%d",&A,&B,&C);
	a=A;
	d=B;
	n=C;
	printf("%d\t%d\t%d",a,d,n);
	c=2*a+(n-1)*d;
	printf("\n%d", c);
	return 0;
}
