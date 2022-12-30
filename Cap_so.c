#include <stdio.h>
int USCLN(int a, int b){
if(b==0) return a;
return USCLN(b,a%b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(USCLN(a,b)==USCLN(c,d)){
            printf("YES");
        }
        else printf("NO");
       printf("\n");
    }
return 0;
}
