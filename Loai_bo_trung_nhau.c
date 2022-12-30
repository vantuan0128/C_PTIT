#include <stdio.h>
int main(){
    int n;
    int i;
    do
    scanf("%d",&n);
    while(n<=2);
    int a[100000],b[100000]={0}; // nhớ cho mảng lớn để không bị lỗi RTE
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<100000;i++){
        if(b[a[i]]>0){
            printf("%d ",a[i]);
            b[a[i]]=0;
        }
    }
    return 0;
}
