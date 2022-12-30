#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar(); // lấy 1 kí tự enter thì nó vào getchar để không bị ăn vào dữ liệu mỗi bộ test
    while(t--){
        char a[200];
        gets(a);
        int dem=1;   //khi đã có test kiểu gì cũng có 1 chữ
        for(int i=0;i<strlen(a)-1;i++){
                if(a[i]==' ' &&a[i+1]!=' ')
                dem++;
        }
        printf("%d\n",dem);
    }
return 0;
}
