#include <stdio.h>
int main(){
    int j,i,n;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d",&n);
    printf("Multiplication table from 1 to %d \n",n);
    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            printf("%dx%d = %d, ",j,i,i*j);
        }

        printf("\n");
    }
}