#include<stdio.h>
#include<math.h>
int check(int n){
    float a=sqrt(n);
    if(a==(int)a){
    return 1;
    }
    return 0;
}
int main(){
    int i;
    scanf("%d",&i);
    while(i--){
		int n;
    scanf("%d",&n);
    check(n);
    if(check(n)==1)
    printf("YES\n");
    else printf("NO\n");
}}
