#include<stdio.h>
void main(){
    int n,a[10],i,sum=0;
    float average;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of array:");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("the sum of array is:");
    for(i=0;i<=n;i++){
        sum = sum + a[i];
    }
    printf("%d",sum);
    printf("\n");

    average = sum/n;

    printf("%f",average);
    printf("\n");
}