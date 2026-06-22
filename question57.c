#include<stdio.h>
void main(){
    int i,n,a[10],largest,second;
    
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Enter the elements in the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    largest = second=a[0];

    for(i=1;i<n;i++){
        if(a[i]>largest){
            second = largest;
            largest = a[i];
        }
        else if(a[i]>second && a[i] != largest){
            second = a[i];
        }
    }

    printf("Second largest element is:%d",second);

}