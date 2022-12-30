#include <stdio.h>
#define MAXIMUM 20
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int main(){
int i, a[MAXIMUM];
scanf ("%d",&i);
printf("Gia tri lon nhat cua mang: %d",max(a[MAXIMUM],i));
return 0;
}
