// SWITCH CASE 02 WITH CHAR FUNCTION
// SWITCH CALCULATOR
#include <stdio.h>
int main()
{
    char ch;
    float n,n1;
    printf("Addition (+)\n");
    printf("Substraction (-)\n");
    printf("Mutipilication (*)\n");
    printf("Division (/)\n");
    printf("Choose For Calculator : \n");
    scanf("%c",&ch);
    printf("Enter First Number: \n");
    scanf("%f",&n);
    printf("Enter Second Number: \n");
    scanf("%f",&n1);

    switch (ch)
    {
    case '+':
        printf("Addition is: %f \n", n + n1);
        break;
    case '-':
        printf("Substraction is: %f \n", n - n1);
        break;
    case '*':
        printf("Multipilication is: %f \n", n * n1);
        break;
    case '/':
        printf("Division is: %f \n", n / n1);
        break;
    default:
        printf("Invalid Task");
        break;
    }
    return 0;
}