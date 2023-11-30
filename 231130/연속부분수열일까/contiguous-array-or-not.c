#include <stdio.h>
#include <stdlib.h>

void input(int *p,int n){
    int i;
    for(i=0;i<n;i++){
    scanf("%d",&p[i]);
    }
}

int sw(int *a,int *b,int n1,int n2){
    int q,w;
    int k1=0,k2=0;
    
    for(q=0;q<n1;q++){
        k1=0;
        if(a[q]==b[0]){
        for(w=0;w<n2;w++){
            if(a[q+w]==b[w])
            k1++;
        }
        }
        if(k1==n2)
        k2=1;
    }
    return k2;
}

int main() {
    int n1,n2;
    int k=0;
    int *a, *b;

    scanf("%d %d",&n1,&n2);
    a=(int *)malloc(sizeof(int)*n1);
    b=(int *)malloc(sizeof(int)*n2);
    input(a,n1);
    input(b,n2);
    k=sw(a,b,n1,n2);
    
    if(k==1)
    printf("Yes");
    else
    printf("No");

    return 0;
}