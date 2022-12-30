#include<stdio.h>
#include<math.h>

int kiemtraSNT(int x){
	if(x<=1)
	return 0;
	int i;
	for( i=2; i<=sqrt(x);i++){
		if(x%i==0)
		return 0;
	}
	return 1;
}

int main(){
	long n,i;
	scanf("%d",&i);
	while(i--){
	scanf("%ld",&n);
	int kt=kiemtraSNT(n);
	if( kt == 0)
	printf("NO\n");
	else printf("YES\n");

}}
