#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    double m=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.6lf",m);
    printf("\n");
}
return 0;
}
