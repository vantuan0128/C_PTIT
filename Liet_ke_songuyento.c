#include <stdio.h>
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
int n;
int dem=0;
int a[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    if(kiemtraSNT(a[i])){
        dem++;
    }
}
printf("%d ",dem);
for(int i=0;i<n;i++){
    if(kiemtraSNT(a[i])){
        printf("%d ",a[i]);
    }
}
return 0;
}
