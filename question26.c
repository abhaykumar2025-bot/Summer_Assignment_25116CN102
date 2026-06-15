#include<stdio.h>
int fibo(int);
void main(){
    int n,i,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Fabonicci series is :");
    
    for(i=1;i<=n;i++){
        result=fibo(i);
        printf("%d",result);
    }
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}