#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op){
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if(b!=0) result = a/b; 
            else { printf("Cannot divide by zero\n"); return 0; }
            break;
        default: printf("Invalid operator\n"); return 0;
    }
    printf("Result = %.2lf\n", result);
    return 0;
}

