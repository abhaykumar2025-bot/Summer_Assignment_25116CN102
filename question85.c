#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    int i,len,palindrome=1;

    printf("Enetr the string:");
    scanf("%d",str);

    len = strlen(str);

    for(i=0;i<len/2;i++){
        if(str[i] != str[len-i-1]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        printf("The sting is a plinsrome");
    }
    else{
        printf("The string is not palindrome:");
    }
}