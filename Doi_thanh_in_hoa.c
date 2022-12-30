  // Ho ten: Nguyen Van Tuan
  //MSV: B20DCPT182
  //Nhom lop: 19
  // So thu tu: 19
  //Bai 1
 #include<stdio.h>

#include<string.h>

#define max 100

char DoiThanhInHoa(char s[])

{

int i;

 for(i=0;i<strlen(s);i++){
if(s[i]>='a' && s[i]<='z')
{
s[i]=s[i]-32;
}}
printf("%s",s);
}
int main()
{
    char s[max];
//printf("Nhap chuoi: ");
 gets(s);
DoiThanhInHoa(s);
}
