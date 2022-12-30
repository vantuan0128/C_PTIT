#include <stdio.h>
int main(){
    int t;
    int a[100][100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            printf("*",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
