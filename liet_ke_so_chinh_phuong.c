#include<stdio.h>
int dem=0;
long long chinhPhuong(long a, long b){
int i=2;
    while(i*i<=b){
        if(i*i>=a){
            dem++;
        }
        i++;
    }
    return dem;
}
int main(){
    long a,b;
    scanf("%ld%ld",&a,&b);

    printf("%d\n",chinhPhuong(a,b));
    int i=2;
    while(i*i<=b){
        if(i*i>=a){
            printf("%lld\n",(long long)i*i);
        }
        i++;
  }  }
