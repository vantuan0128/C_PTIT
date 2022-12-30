#include <stdio.h>
int main(){
int n;
int a[100];
int dem=0;
do
scanf("%d",&n);
while (n<=2);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
int MAX1=0;
int MAX2=0;
    for(int i=0;i<n;i++){
        if(MAX1<a[i]){
        MAX1=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if (a[i]!=MAX1){
        if(MAX2<a[i]){
        MAX2=a[i];
    }
}}
if(MAX1>MAX2){
    printf("%d %d",MAX1,MAX2);
}
else{
    printf("%d %d",MAX2,MAX1);
}
return 0;
}
