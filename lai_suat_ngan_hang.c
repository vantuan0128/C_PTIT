#include<stdio.h>
#include<stdlib.h>

int main(){
  double n, x, m;
  scanf("%lf %lf %lf", &n, &x, &m);
  double tmp = n;
  int time = 0;
  while(tmp<m){
    double lai = (double)tmp * x/100;
    tmp += lai;
    time++;
  }
  printf("%d\n", time);
  system("pause");
  return 0;}
