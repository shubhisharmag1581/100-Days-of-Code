/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int dig,temp=0;
    while(num>0)
    {
        dig=num%10;
        temp=temp*10+dig;
        num=num/10;
    }
    printf("\nThe reverse of the given number is : %d",temp);
}