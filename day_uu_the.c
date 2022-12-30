#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int chan=0,le=0;
        char kitu=' ';
        int dem=0;
        while(kitu!='\n'){
            int x;
            scanf("%d",&x);
            dem ++;
            if(x%2==0) chan++;
            else le++;
            kitu=getchar();
        }
        if((chan>le && dem%2==0)||(chan<le && dem%2==1)){
            printf("YES\n");
        }
        else printf("NO\n");
    }
return 0;
}
