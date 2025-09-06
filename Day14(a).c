/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int i=1,ctr=0;
    int sum=0;
    while (ctr<n)
    {
        if(i%2!=0)
        {
            ctr++;
            sum+=i;
        }
        i++;
    }
    printf("\nThe sum of first %d odd numbers is : %d ",n,sum);
}