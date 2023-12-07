#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n,i;
    char result[12];
    int *k;
    int re=0;

    scanf("%d",&n);
    k=(int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d",&k[i]);
        re=re+k[i];
    }
    sprintf(result,"%d",re);
    printf("%s%c",result+1,result[0]);
    

    return 0;
}