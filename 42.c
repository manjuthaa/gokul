#include<stdio.h>
int main() {
	char a[100],b[100];
	int i,s,s1;
	scanf("%s",a);
	scanf("%s",b);
	s=strlen(a);
	s1=strlen(b);
    if(s==s1)
    {
        printf("%s",b);
    }
    else if(s>s1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
	 return 0;
}

