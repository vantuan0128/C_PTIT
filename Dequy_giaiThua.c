#include <stdio.h>
unsigned long long giaiThua( int n){
    if( n==0 || n==1)
        return 1;
    else
        return n* giaiThua( n-1 );
}
int main(){
    int i;
    //scanf ("%d",&i);
    for (i=0;i<10;i++){
        printf("%d! = %lld\n", i, giaiThua(i));
    }
    return 0;
    }
