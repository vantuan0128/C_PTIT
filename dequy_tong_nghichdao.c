#include <stdio.h>
float tong(int n){
    if( n==1)
        return n;
    else
        return  (float) 1/(n)+tong(n-1);
    }
int main(){
int i;
scanf ("%d",&i);
printf("%f",tong(i));
return 0;
}
