#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char c[1000];
    gets(c);
    int demchu=0, demso=0;
    for(int i=0;i<strlen(c);i++){
        if(isalpha(c[i])) demchu++;
        else if (isdigit(c[i])) demso++;
    }
    printf("%d %d %d",demchu,demso,strlen(c)-demchu-demso);
return 0;
}
