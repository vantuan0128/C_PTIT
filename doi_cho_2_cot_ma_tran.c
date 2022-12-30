#include <stdio.h>
int main(){
    int a[100][100];
    int m,n;
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
            if(j==y) printf("%d ",a[i][x]);
            else if(j==x) printf("%d ",a[i][y]);
            else printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
