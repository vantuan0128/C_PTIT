#include <stdio.h>
#include <math.h>

int ktNguyento(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    int dem=0;
    scanf("%d",&n);
    int i=2;
    while(dem<n){
            if(ktNguyento(i)==1){
                printf("%d\n",i);
                dem++;
            }
        i++;
        }
return 0;
}
