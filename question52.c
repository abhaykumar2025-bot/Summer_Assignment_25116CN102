#include<stdio.h>
void main(){
    int n,a[10],i;
    int even = 0,odd = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The count of even is:%d\n",even);
    printf("The count of odd is:%d\n",odd);
}