#include <stdio.h>
int main(){
    int t;
    long n,sodau,socuoi;
    scanf("%d",&t);
    while (t--){
            scanf("%ld",&n);
            socuoi=n%10;
    while(n>0){
        sodau=n%10;
        n=n/10;
    }
    if(sodau==socuoi){
        printf("YES\n");
    }
    else {
        printf("NO\n");
                    }
    }
return 0;
}
