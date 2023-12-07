#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,r=0;
    int *a;
    int i;
    
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==2){
            r++;
        }
        if(r==3){
            printf("%d\n",i+1);
            break;
        }
    }

    return 0;
}