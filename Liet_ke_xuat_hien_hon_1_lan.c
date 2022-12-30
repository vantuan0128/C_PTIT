#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[100000]={0};   //sử dụng mảng đếm b[a[i]] cho tất cả bằng 0
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    int count=0;
    for(int i=0;i<100000;i++){
        if(b[i]>1){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<n;i++){
        if(b[a[i]]>1){
            printf("%d ",a[i]);
        }
        b[a[i]]=0;    // tránh trừờng hợp đã đếm qua nhưng vẫn in 5 10 10 5
    }
return 0;
}
