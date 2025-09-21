/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int dig,temp=num,sum=0,pro,i;
    while(temp>0)
    {
        dig=temp%10;
        i=1;
        pro=1;
        while(i<=dig)
        {
            pro=pro*i;
            i++;
        }
        sum=sum+pro;
    }
    if(num==sum)
        printf("\nthe given number is a strong number.");
    else
        printf("\nThe given number is not a strong number.");
}