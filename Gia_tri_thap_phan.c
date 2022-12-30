#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double n;
    scanf("%d",&i);
       while(i>0 && i--)
    {      scanf("%lf",&n);

       printf("%.15lf\n",1/n);

    }
    return 0;
}
