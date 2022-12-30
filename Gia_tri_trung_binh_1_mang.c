#include <stdio.h>
int main(){
int n;
long tong=0;
scanf("%d",&n);
int a[100];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    tong=tong+a[i];
}
float k= (float)tong/n;
printf("%.3f",k);
return 0;
}
