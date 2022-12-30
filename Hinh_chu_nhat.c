#include <stdio.h>
int main()
{
int cd, cr, cv, dt;
//printf("Nhap chieu dai va chieu rong:  ");
scanf("%d %d",&cd,&cr);
if (cr <=0||cd <=0)
    printf("0");
else
{cv = (cr+cd)*2;
dt = cr*cd ;
//printf("\nChu vi va dien tich la: ");
printf("%d %d",cv,dt);
return 0;
}}
