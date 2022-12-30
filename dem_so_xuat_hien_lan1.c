#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for ( i=0;i<n; i++) {
        int dem = 0;
        for ( j=0;j<n;j++) {
            if (a[i] == a[j]) {
                if (i<=j) {
				dem = dem + 1;
				 }
                else {
				break;
				 }
            }

        }
       if(dem!=0){
       printf("%d %d\n",a[i],dem);
       }

    }
    return 0;
}
