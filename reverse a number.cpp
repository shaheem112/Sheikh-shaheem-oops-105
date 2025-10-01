#include <stdio.h>
int main() {
    int n, rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    printf("Reversed = %d\n", rev);
    return 0;
}

