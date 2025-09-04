/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter two numbers and the operator (+,-,*,/,%) : ");
    scanf("%d%d%c",&a,&b,&op);
    switch(op)
    {
        case '+' : 
                    int sum=a+b;
                    printf("\nThe sum of these two numbers is : ", sum);
                    break;
        case '-' : 
                    int sub=a-b;
                    printf("\nThe diffrence between these two numbers is : ", sub);
                    break;
        case '*' : 
                    int pro=a*b;
                    printf("\nThe product of these two numbers is : ", pro);
                    break;
        case '/' : 
                    int div=a/b;
                    printf("\nThe quotient of these two numbers is : ", div);
                    break;
        case '%' : 
                    int mod=a%b;
                    printf("\nThe remainder on dividing these two numbers is : ", mod);
                    break;
        default : 
                    printf("Invalid Operator");
    }
}