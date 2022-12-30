#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        int dem=1;
        do
        scanf("%d",&n);
        while(n<2);
        int a[100];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(j=1;j<n;j++){
                int max= a[j];
            for(i=0;i<j;i++){
                if(a[i]>a[j]){
                    max=a[i];
                }
            }
            if(max==a[j]){
                dem++;
            }
        }
        printf("%d\n",dem);
    }
return 0;
}
