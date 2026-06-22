#include<stdio.h>
int main(){
    int i,n,j,a[10];

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Enter the element in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Duplicate number is:\n");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
            printf("%d",a[i]);
            break;
        }
    }
}