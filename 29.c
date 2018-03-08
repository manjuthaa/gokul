#include <stdio.h>

int main(void) {
	int mins,hour,min1;
	scanf("%d",&mins);
	printf("time in mins:%d",mins);
	hour=mins/60;
	min1=mins%60;
	printf("time:%d",hour);
	printf("mins:%d",min1);
	return 0;
}
