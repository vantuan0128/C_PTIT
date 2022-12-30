#include <stdio.h>
long USCLN(long a, long b){
if(b==0) return a;
return USCLN(b,a%b);
}

int main(){
    long a,b;
    do
    scanf("%ld %ld",&a,&b);
    while(a>b);
    for(int i=a;i<=b;i++){
        for(int j=i+1;j<=b;j++){
            if(USCLN(i,j)==1&&i!=j){
                printf("(%d,%d)\n",i,j);
            }
        }
    }
return 0;
}
