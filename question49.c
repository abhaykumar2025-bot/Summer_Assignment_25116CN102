#include<stdio.h>
void main(){
    int n,a[10],i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of array:");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("The output of a array is:\n");
    for(i=0;i<=n;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}