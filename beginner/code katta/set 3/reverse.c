#include <stdio.h>

int main(void) {
	int n,temp,rem=0,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
{
rem=n%10;

rev=rev*10+rem;
n=n/10;
}
printf("%d",rev);
return 0;
}
