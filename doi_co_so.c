#include<stdio.h>
#include<string.h>
int n,m;
void doicoso(){
    char s[100];int i=0,t;
    while(n>0){
        t=n%m;n /= m;
        if(t<10) s[i]='0' + t;
        else s[i] = 'A' +(t-10);
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",s[j]);
    }
}
main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        doicoso();
        printf("\n");
    }
}
