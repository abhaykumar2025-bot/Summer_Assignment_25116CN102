#include<stdio.h>
void main(){
    int n,r,p=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    while(n>0){
        r = n%10;
        s = s*r;
        n = n/10;
    }
    prrintf("the product of digit :%d",s);
    return 0;
}