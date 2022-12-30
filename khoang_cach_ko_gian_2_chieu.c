#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    float a,b,c,d;
    while (t--){
    do
    scanf("%f%f%f%f",&a,&b,&c,&d);
    while(abs(a)>1000||abs(b)>1000||abs(c)>1000||abs(d)>1000);
    double m = sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.6lf",m);
    printf("\n");
}
return 0;
}
