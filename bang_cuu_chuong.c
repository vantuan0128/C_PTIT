#include <stdio.h>
int main()
{
unsigned int N,S;
//printf("Nhap gia tri N: " );
scanf("%d",&N);

for(int i=1;i<=10;i++)
    {
    S=N*i;
    printf("%d ", S);
    }
    return 0;
}

