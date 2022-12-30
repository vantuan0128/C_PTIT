// Ho ten : Nguyễn Văn Tuấn
//MSV: B20DCPT182
//Nhóm lớp: 19
//STT: 19
//Bai so LQ08
#include<stdio.h>
float  check(float a, float b, float c){
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		return 1;

	return 0;
}
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(check(a,b,c)==1){
		printf("1");
	}
	else printf("0");
}
