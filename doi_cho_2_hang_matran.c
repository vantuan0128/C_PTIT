#include <stdio.h>
int main(){
    int m,n;
    int a[100][100];
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==y) printf("%d ",a[x][j]);
            else if(i==x) printf("%d ",a[y][j]);
            else printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
