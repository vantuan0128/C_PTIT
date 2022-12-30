#include <stdio.h>
void ktFb(int n){
    long long fn,f0=0,f1=1;
    int i;
    for(i=0;i<n;i++){
        if(i<=1){
            fn=i;
        }
        else{
            fn = f1+f0;
            f0 = f1;
            f1 = fn;
        }
        printf("%lld ",fn);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    ktFb(t);
return 0;
}
