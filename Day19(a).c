/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
void main()
{
int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int min,max;
    if(a>=b)
    {
        max=a;min=b;
    }
    else 
    {
        max=b;min=a;
    }
    int r=1;
    while (r!=0)
    {
        r=max%min;
        max=min;
        min=r;
    }
    int lcm=(a*b)/max;
    printf("\nThe LCM of the two numbers is : %d", lcm);
}