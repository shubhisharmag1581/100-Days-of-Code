/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

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
   // printf("%d %d", max, min);
    int r=1;
    while (r!=0)
    {
        r=max%min;
        max=min;
        min=r;
    }
    printf("\nThe HCF of the two numbers is : %d", max);
}