/*Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a , &b);
    printf("\nLet the numbers be a : %d and b be : %d", a,b);
    c=a;
    a=b;
    b=c;
    printf("\nNow after exchanging the numbers a : %d and b : %d", a,b);
}