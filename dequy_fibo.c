#include <stdio.h>
unsigned long long fibo (int n){
    if (n==0 || n==1)
        return n;
    else
        return (fibo (n-1) + fibo (n-2));
    }
int main(){
int i;
//scanf("%d",&i);
for (i=0;i<100;i++){
    printf("fibo(%d)=%lld\n",i,fibo(i));
}
return 0;
}
