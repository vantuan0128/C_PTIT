#include <stdio.h>
long ktfb(long long n){
long long fn,f1=1,f0=0;
if(n==1||n==0)
    return 1;
for(int i=2;i<=92;i++){
    fn=f1+f0;
    f0=f1;
    f1=fn;
    if(fn==n)
        return 1;
}
return 0;
}

int main(){
int t;
scanf("%d",&t);
while(t--){
long long n;
scanf("%lld",&n);
if(ktfb(n)==1){
    printf("YES\n");
}
else
    printf("NO\n");
}
return 0;
}
