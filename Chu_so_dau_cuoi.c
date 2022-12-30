#include <stdio.h>
int main(){
    int n,sodau;
    scanf("%d",&n);
    int socuoi=n%10;
    while(n>0){
        sodau=n%10;
        n=n/10;}
        printf("%d %d",sodau,socuoi);
return 0;
}
