#include<stdio.h>
int main(){
    int n,r,s=0;
    
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a = n;
    while (n>0)
    {
        r = n%10;
        s = s*10 +r;
        n = n/10;
    }
    if (a == s){
        printf("It is a palindrome");
    }
    else{
        printf("It is a not palndriome");
    }
    return 0;
    
}