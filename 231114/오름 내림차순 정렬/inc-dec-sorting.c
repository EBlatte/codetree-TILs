#include <stdio.h>

void up(int a[],int n){
    int i,j;
    int d;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        if(a[i]<a[j]){
        d = a[i];
        a[i] = a[j];
        a[j] = d;
        }
    }
}
void down(int a[],int n){
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
    int a[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    down(a,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    
    up(a,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");

    return 0;
}