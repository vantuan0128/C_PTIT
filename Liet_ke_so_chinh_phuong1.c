#include <stdio.h>
#include <math.h>
int main() {
	long long a,b;
	int dem=0;
	do
	scanf("%lld %lld",&a,&b);
	while(a>b);
    int m=sqrt(a);
        m=(m*m==a)?m:m+1;
		for(int i=m;i<=sqrt(b);i++){
            if(i*i<b){
                dem++;
            }
		}
		printf("%d\n",dem);
		for(long i=m; i<=sqrt(b); i++) {
			printf("%ld\n",i*i);
		}
	return 0;
}
