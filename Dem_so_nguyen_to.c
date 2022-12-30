#include <stdio.h>
#include <math.h>
int ktNguyento(int n){
if(n==1||n==0) return 0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
}
return 1;
}

int chiaChuso(int n){
    int N;
while(n>0){
        N=n%10;
        if(ktNguyento(N)==0) {
        return 0;
        break; }
        n/=10;
}
return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
    int dem=0;
    do
    scanf("%d %d",&a,&b);
    while(a>b);
    for(int i=a;i<=b;i++){
        if(ktNguyento(i)==1 && chiaChuso(i)==1){
            dem++;
                }
            }
    printf("%d\n",dem);
    }
return 0;
}
