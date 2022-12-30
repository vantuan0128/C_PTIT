#include <stdio.h>
long USCLN(long a,long b){
if(b==0) return a;
return USCLN(b,a%b);
}

long BSCNN(long a, long b){
return a*b/USCLN(a,b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    long a,b;
    scanf("%ld %ld",&a,&b);
    printf("%ld %ld",BSCNN(a,b),USCLN(a,b));
    printf("\n");
    }
return 0;
}
