/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp=num,dig,pro=1;
    while(temp>0)
    {
        dig=temp%10;
        if(dig%2!=0)
            pro=pro*dig;
        temp=temp/10;
    }
    printf("\nThe product of the odd digits of the given number is : %d", pro);
}