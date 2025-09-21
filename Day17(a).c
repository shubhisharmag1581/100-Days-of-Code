/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int dig,temp=num,sum=0;
    while(temp>0)
    {
        dig=temp%10;
        sum=sum+pow(dig,3);
        temp=temp/10;
    }
    if (sum==num)
        printf("The given number is an Armstrong Number.");
    else
        printf("The given number is not an Armstrong Number.");
}