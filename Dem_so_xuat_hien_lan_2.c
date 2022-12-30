#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int c=1;
    while(t--){
        int n;
        scanf("%d",&n);
        int i;
        int a[100],b[10000]={0};
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        printf("Test %d:\n",c);
        for(i=0;i<n;i++){
            if(b[a[i]]>=1){
                printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
            }
            b[a[i]]=0;
        }
        c=c+1;
    }
return 0;
}
