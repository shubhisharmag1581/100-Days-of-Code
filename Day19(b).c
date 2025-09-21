/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp=num,dig,sum=0;
    while(temp>0)
    {
        dig=temp%10;
        sum=sum+dig;
        temp=temp/10;
    }
    printf("\nThe sum of the digits of the number is : %d", sum);
}