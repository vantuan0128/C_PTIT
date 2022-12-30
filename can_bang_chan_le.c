#include <stdio.h>
#include <math.h>
long demchan(long n){
int N,dem=0;
while(n>0){
    N=n%10;
    if(N%2==0) dem++;
    n/=10;
}
return dem;
}
long demle(long n){
int N,dem=0;
while(n>0){
    N=n%10;
    if(N%2==1) dem++;
    n/=10;
}
return dem;
}

int main(){
    int n;
    int dem=0;
    do
        scanf("%d",&n);
    while(n%2==1);
    for(long i=pow(10,n-1);i<=pow(10,n)-1;i++){
        if(demchan(i)==demle(i)){
            dem++;
            printf("%d ",i);
            if(dem%10==0) printf("\n");
        }
    }
return 0;
}
