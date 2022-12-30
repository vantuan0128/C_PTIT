#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int z=1;
    while(t--){
        int a[100][100];
        int x,y;
        scanf("%d %d",&x,&y);
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Test %d:\n",z);
        //Tim hang co tong phan tu lon nhat
        int res=0,hang,cot;
        for(int i=0;i<x;i++){
            int sum=0;
            for(int j=0;j<y;j++){
                sum+=a[i][j];
            }
            if(sum>res){
                res=sum;
                hang=i;
            }
        }
        //Tim cot co tong phan tu lon nhat
        res=0;
        for(int i=0;i<y;i++){  // duyet theo cot
            int sum=0;
            for(int j=0;j<x;j++){
                if(j!=hang){
                sum+=a[j][i];
            }
        }
            if(sum>res){
                res=sum;
                cot=i;
            }
        }
        for(int i=0;i<x;i++){
            if(i!=hang){
                for(int j=0;j<y;j++){
                    if(j!=cot){
                        printf("%d ",a[i][j]);
                    }
                }
            }
            printf("\n");
        }
        z++;
    }
return 0;
}
