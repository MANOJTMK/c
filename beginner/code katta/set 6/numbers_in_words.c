#include <stdio.h>

int main(void) {
     int n,rem=0,rev,dig;
     scanf("%d",&n);
     while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    while(rev!=0)
    { 
      dig=rev%10;
      switch(dig)
     {
     case 0:
         printf("Zero ");
         break;
        case 1:
        printf("One ");
        break;
        case 2:
         printf("Two ");
         break;
        case 3:
        printf("Three ");
        break;
        case 4:
        printf("Four ");
        break;
        case 5:
        printf("Five ");
        break;
        case 6:
        printf("Six ");
        break;
        case 7:
        printf("Seven ");
        break;
        case 8:
        printf("Eight ");
        break;
        case 9:
        printf("Nine ");
        break;
    }
     rev=rev/10;
}
      
	return 0;
}
