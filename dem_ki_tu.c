#include <stdio.h>
void xau(char str[]){
int i = 0;
int demchu=0;
int demso=0;
int kitu=0;
    for(i=0;i<str[i]; i++){
    	if( str[i] >= 'a' && str[i] <= 'z' || str[i]>= 'A' && str[i] <= 'Z'){
    		demchu++;
		}
		if( str[i] >= '0' && str[i] <= '9' ){
			demso++;
		}
		if( str[i] >=' ' && str[i] <='/' || str[i] >=':' && str[i] <= '@' || str[i]>= '[' && str[i] <= '`' || str[i] >= '{' && str[i] <= '~' ){
			kitu++;
		}
	}
	printf("%d %d %d ", demchu,demso,kitu);
}

int main(){
    char str[100];
    gets(str);
   xau(str);
}
