#include<stdio.h>
void main(){
    int a[10],x,n,i;

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Enter the element in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element value of x:");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==n){
        printf("not found");
    }
}