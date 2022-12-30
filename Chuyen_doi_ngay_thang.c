#include <stdio.h>
int main(){
int ngay, tuan, nam;
scanf ("%d",&ngay);
nam = ngay/365;
ngay = ngay-nam*365;
tuan = ngay/7;
ngay = ngay-tuan*7;
printf("%d %d %d",nam, tuan, ngay);
return 0;
}
