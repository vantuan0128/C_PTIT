#include <stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++){
    for(int j=1;j<t;j++){
        if(j<=t-i){
            printf("~");
        }
    }
        for(int j=1;j<=t;j++){
            if(i==1||j==1||j==t||i==t){
                printf("*");
            }
            else printf(".");
        }
    printf("\n");
}

return 0;
}
