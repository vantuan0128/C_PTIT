#include<stdio.h>
//#include <conio.h>
void main()
{
    char s[200];
    int n;
    scanf("%d",&n);
    while(n--){
    int sotu=0,i=-1;
    printf("");
    fflush(stdin);gets(s);
    while(s[++i]!=0)
        if(s[i]!=' '&&(s[i+1]==' '||s[i+1]==0)) sotu++;
    printf("%d\n",sotu);
}
return 0;
}
