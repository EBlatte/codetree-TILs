#include <stdio.h>
#include <string.h>

void up(char a[],int n){
    int i,j;
    int d;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        if(a[i]>a[j]){
        d = a[i];
        a[i] = a[j];
        a[j] = d;
        }
    }
}

int main() {
    char a[100];
    int i;

    scanf("%s",a);
    
    up(a,strlen(a));
    for(i=0;i<strlen(a);i++)
    printf("%c",a[i]);
    printf("\n");

    return 0;
}