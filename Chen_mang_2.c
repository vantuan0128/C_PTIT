#include <stdio.h>
int main(){
int t;
int N,M,p;
int i,a[100],b[100];
scanf("%d",&t);
int c=1;
    while(t--){
        do
            scanf("%d %d %d",&N,&M,&p);
        while(N<M&&M<=p);
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<M;i++){
            scanf("%d",&b[i]);
        }
        printf("Test %d:\n",c);
        for(int i=0;i<p;i++){
            printf("%d ",a[i]); // in phan tu mang a tu dau den vi tri p-1
        }
        for(int i=0;i<M;i++){  // chen cac phan tu mang b tu vi tri p
            printf("%d ",b[i]);
        }
        for(int i=p;i<N;i++){   // in phan tu mang a tu vi tri p den het
            printf("%d ",a[i]);
        }
        printf("\n");
        c=c+1;
    }
return 0;
}
