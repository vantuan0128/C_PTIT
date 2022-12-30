#include <stdio.h>
#include <math.h>
int main()
{
float r, cv, dt;
printf("\n Nhap Ban kinh r= ");
scanf("%f",&r);
cv=2 * r * M_PI; dt= M_PI * r * r;
printf("\n Chu vi=%0.2f\n Dien tich= %0.2f", cv, dt);
return 0;
}
