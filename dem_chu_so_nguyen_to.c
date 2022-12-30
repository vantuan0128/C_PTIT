#include <stdio.h>
int main(){
    long n;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    scanf("%ld",&n);
    while(n>0){
        int sc=n%10;
        if(sc==2){
            a++;
            n/=10;
        }
        else if (sc==3){
            b++;
            n/=10;
        }
        else if (sc==5){
            c++;
            n/=10;
        }
        else if (sc==7) {
            d++;
            n/=10;
        }
        else n/=10;
    }
    if(a!=0){
    printf("2 %d\n",a);
    }
    if(b!=0){
    printf("3 %d\n",b);
    }
    if(c!=0) {
    printf("5 %d\n",c);
    }
    if(d!=0){
    printf("7 %d\n",d);
    }
return 0;
}
