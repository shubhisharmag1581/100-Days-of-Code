/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int i=1,ctr=0;
    int product=1;
    while (ctr<n)
    {
        if(i%2==0)
        {
            ctr++;
            product*=i;
        }
        i++;
    }
    printf("\nThe product of first %d even numbers is : %d ",n,product);
}