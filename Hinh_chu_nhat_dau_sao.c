#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
/*    for(;n<=0 || m <= 0;)  // neu m va n nho hon 0 thi khong thoa man  // nop tren codeptit thi bo cho nay di
    {
        if(n <= 0 || m<=0){
            scanf("%d %d",&n,&m);
        }
    } */
    for(int i = 1; i <= n; i++){
        for(int k = 1 ; k <= m; k++){     // đi từ rộng trước -> Ko thỏa mãn xuống dòng (chiều cao sau)
            if(i == 1 || k == 1 || i == n || k == m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

