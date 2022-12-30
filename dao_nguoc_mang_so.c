#include<stdio.h>
#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for( i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp;
   }
    for(int i = 0; i<n; i++)
   {
      printf("%4d",a[i]);
   }

}
