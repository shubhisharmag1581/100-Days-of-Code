/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    int temp=num,dig,first_dig,last_dig,middle_part;
    int digits, result, power_of_10;
    if(num>=0 && num<=9)
        printf("\nResult : %d",num);
    last_dig=num%10;
    digits=0;
    power_of_10=1;
    while(temp>0)
    {
        temp=temp/10;
        digits++;
        if(temp>0)
           power_of_10*=10;
    }
    first_dig=num/power_of_10;
    middle_part=(num%power_of_10)/10;
    result=last_dig*power_of_10+middle_part*10+first_dig;
    printf("\nResult : %d",result);
}