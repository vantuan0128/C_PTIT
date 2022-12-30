#include <stdio.h>
#include <math.h>
int ktSNT(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int a[5000];
    int b[50000]={0};
    int n;
    do
    scanf("%d",&n);
    while(n>500);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(ktSNT(a[i])==1){
            b[a[i]]++;
        }
    }
    for(int i=0;i<50000;i++){
        if(b[a[i]]>=1){
            printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
        }
        b[a[i]]=0;
    }
return 0;
}
