#include <stdio.h>
#include<math.h>

int xuli(int n){
	int count =0,i;
	int s=sqrt(n);
	for( i=1;i<=s;i++){
		if(n%i==0){
			if(i%2==0){
				count ++;
			}
			if((n/i)%2==0){
				count ++;
			}
		}
	}
	if(s*s==n&&n%2==0) count-=1;
	return count;
}
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",xuli(n));
	}
	return 0;
}
