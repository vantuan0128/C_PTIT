#include <stdio.h>
int main(){
    int t;
        scanf("%d",&t);
        while(t--){
            int chan=0,le=0;
            long n;
            scanf("%li",&n);
            int N;
            while(n>0){
            N=n%10;
            if(N%2==0){
                chan++;
            }
            else{
                le++;
            }
            n=n/10;
            }
        printf("%d %d\n",le,chan);
        }
return 0;
}
