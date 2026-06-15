#include<stdio.h>
int fact(int);
void main(){
    int n,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    result = fact(n);
    printf("%d",result);
}
int fact(int n){
    if(n ==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}