#include <stdio.h>

int main(void) {
int sum=0,i,k,a[10];
scanf("%d",&k);
for(i=1;i<=k;i++)
{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	
}
printf("%d",sum);
return 0;
}
