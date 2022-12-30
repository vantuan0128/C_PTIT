#include <stdio.h>
int main(){
    long t;
    int count=0;
    scanf("%li",&t);
    while(t>0){
        int N=t%10;
        count++;
        t=t/10;
    }
    printf("%d",count);
return 0;
}
