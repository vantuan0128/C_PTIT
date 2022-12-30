#include<stdio.h>
long USCLN(long a, long b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

main(){
	int t;
	scanf("%d",&t);
	while(t--){

	long a,b;
	scanf("%ld%ld",&a,&b);
	if( a > 0 && b > 0){

	USCLN(a,b);
	 long BCNN= (a*b)/USCLN(a,b);
	printf("%ld %ld\n",BCNN,USCLN(a,b) );
}
}
}
