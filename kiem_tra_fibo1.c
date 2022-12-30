#include <stdio.h>
long ktfb(long n){
int fn,f1=1,f0=0;
if(n==1||n==0)
    return 1;
while (fn<=n){
    fn=f1+f0;
    f0=f1;
    f1=fn;
    if(fn==n)
        return 1;
}
return 0;
}
int main(){
long n;
scanf("%ld",&n);
ktfb(n);
if(ktfb(n)==1){
    printf("1");
}
else
    printf("0");
return 0;
}
