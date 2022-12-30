//Ho ten: Nguyễn Văn Tuấn
//MSV: B20DCPT182
//Nhom lop: 19
//STT: 19
//Bai LQF01

#include <stdio.h>
#define MAX 10
int main(){
FILE *fp;
fp = fopen("FPL1919B20DCPT182LQF01.txt","w");
int n, a[MAX];
for (int i=0; i< MAX;i++){
scanf("%d ",&a[i]);}
    scanf("%d",&n);
fprintf(fp,"%d ",n);
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
fprintf(fp,"%d ",a[i]);}
fclose(fp);
return 0;
}
