#include<stdio.h>
void main(){
int j,i,k,r,c,a[10][10],b[10][10],mult[10][10];

printf("Enter the number of rows:");
scanf("%d",&r);

printf("Enter the number of column:");
scanf("%d",&c);

printf("Enter the first matrix:");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the second matrix:");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("The multiplication of matrix is:");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        mult[i][j] = 0;
        for(k=0;k<c;k++){
            mult[i][j] += a[i][k]*b[k][j];
        }
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d \t \n",mult[i][j]);
    }printf("\n");
}
}