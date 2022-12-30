#include<stdio.h>
#include <math.h>
long thuanNghich(long n){
int x=n;
int socuoi,somoi=0;
while(n>0){
    socuoi=n%10;
    somoi=somoi*10+socuoi;
    n/=10;
}
if(somoi==x) return 1;
else return 0;
}

long chiaHetcho10(long n){
int sum=0;
int N;
while(n>0){
    N=n%10;
    sum=sum+N;
    n/=10;
}
if(sum%10==0) return 1;
else return 0;
}

long chuSo4(long n){
int N;
while(n>0){
    N=n%10;
    if(N==4){
        return 0;
        break;
    }
    n/=10;
}
return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        for(long i=pow(10,a-1);i<=pow(10,a)-1;i++){
        if(thuanNghich(i)==1&&chiaHetcho10(i)==1&&chuSo4(i)==1){
            printf("%ld ",i);
        }
    }
    printf("\n");
}
return 0;
}
