#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	int b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		int m=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m]){
				m=j;
			}
		}
		int tmp=a[m];
		a[m]=a[i];
		a[i]=tmp;
	}
	for(int i=0;i<n;i++){
		int v=0;
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
			b[j]=0;
			 v=1;
			}
		}
		if(v==1)printf("%d ",a[i]);
	}
}
