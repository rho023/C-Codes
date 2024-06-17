#include <stdio.h>
#include <math.h>
int main(){
    int n, ans = 0, B[100];
    printf("Enter the Hexadecimal Number :--> ");
    scanf("%d", &n);
    int i = 0;
    while(n != 0){
        int digit = n % 10;
        ans = ans + (digit * pow(16, i));
        n = n / 10;
        i++;
    }
    printf("\nThe Decimal Number is :--> %d", ans);
    int j = 0, k;
    while(ans > 0){
        B[j] = ans % 2;
        ans = ans >> 1;
        j++;
    }
    printf("\nThe Binary Number is :--> ");
    for(k = j - 1; k >= 0; k--){
        printf("%d",B[k]);
    }
    return 0;
}