#include <stdio.h>
int main(){
    int a,b,c,d,x,y;
    int t;
    scanf("%d\n",&t);
    while (t--){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a<c && b<d){
        x=c-a;
        y=d-b;
    }
    if(x==y){
        printf("YES\n");
        }
    else{
            printf("NO\n");
            }
    }
    return 0;
}
