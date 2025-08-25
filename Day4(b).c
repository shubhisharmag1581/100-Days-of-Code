/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\nSum of the first %d natural numbers is : %d",n,sum);
}