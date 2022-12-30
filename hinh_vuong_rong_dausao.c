#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i==0||i==t-1||j==0||j==t-1){
                printf("*");
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }
return 0;
}
