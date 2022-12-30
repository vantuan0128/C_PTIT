#include<stdio.h>
void nhapA(int a[],int n){
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]); }
}

void nhapB(int b[],int m){
    for(int i=0;i<m;i++){
            scanf("%d",&b[i]); }
}

void xuatB(int b[],int m){
    for(int i=0;i<m;i++){
            printf("%d ",b[i]); }
}

int main(){
    int a[100],b[100],n,m,x;
    scanf("%d%d",&n,&m);
    nhapA(a,n);
    nhapB(b,m);
    scanf("%d",&x);
    for(int i=0;i<x;i++) printf("%d ",a[i]);
    xuatB(b,m);
    for(int i=x;i<n;i++) printf("%d ",a[i]);
    return 0;
}
