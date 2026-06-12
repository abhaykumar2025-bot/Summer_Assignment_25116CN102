#include<stdio.h>
int main(){
    int i,n,n1,n2,n3;
    printf("Enter the value of n:");
    scanf("%d",&n);

    n1 = 0;
    n2 = 1;
    
    printf("%d",n1);
    printf("%d",n2);

    for(i=2;i<=n;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        printf("%d",n3);
    }
    return 0;
}