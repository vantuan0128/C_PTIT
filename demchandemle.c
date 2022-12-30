#include<stdio.h>
int main()
{
    unsigned int n;
    int b=0,c=0;
    scanf("%du",&n);
    while(n>0)
    { if( n % 2 == 1)
        {
          b=b+1;
        }
       if( n %2 == 0)
        {  c = c +1;
        }
       n = n/10;

    } printf("%d %d",b,c);
    if(n = 0 )
    printf("0");

    return 0;

}
