#include <stdio.h>
#include <math.h>
int kiemtraSNT (int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    int c=1;
    while(t--){
        int n,i,nt;
        scanf("%d",&n);
        int a[100],b[100000]={0};
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(kiemtraSNT(a[i])==1){
                b[a[i]]++;
            }
        }
        printf("Test %d:\n",c);
        for(i=0;i<100000;i++){
            if(b[i]>=1){
                printf("%d xuat hien %d lan\n",i,b[i]);
            }
        }
        c+=1;
    }
return 0;
}
