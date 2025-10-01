#include <stdio.h>
int main() {
    int n, t1=0, t2=1, next;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(int i=1;i<=n;i++){
        if(i==1) { printf("%d ", t1); continue; }
        if(i==2) { printf("%d ", t2); continue; }
        next = t1 + t2;
        t1=t2; t2=next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}

