#include <stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    char n;
    scanf("\n%c",&n);
    if(n>= 65 && n<= 90){
        printf("%c\n",n + 32);
        }
    if(n>= 97 && n<= 122){
        printf("%c\n",n - 32);
        }
}
return 0;
}




