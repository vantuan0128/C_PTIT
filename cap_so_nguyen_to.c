#include <stdio.h>
#include <math.h>
int ktSNT(int n){
if(n<2) return 0;
if(n%2==0&&n!=2) return 0;
for(int i=3;i<=sqrt(n);i+=2){
    if(n%i==0)  return 0;
}
return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        int i,j;
        do
        scanf("%d",&a);
        while(a<4&&a%2==1);
        for(i=2;i<a;i++){
            if(ktSNT(i)==1&&ktSNT(a-i)==1&&i<=a-i){
                printf("%d %d ",i,a-i);
            }
            }
        printf("\n");
    }
return 0;
}
