#include<stdio.h>
#include<math.h>
int count=0;
long long gt(int n){

		while(n%2==0){
			++count;
	n/=2;

	}
	return count;

	}
	int main(){
		int a,b;
		int k;
		scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		 k=gt(i);
	}
	if(k>=b)printf("Yes");
	else printf("No");


	}
