/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
void main()
{
    int s;
    printf("Enter time in seconds : ");
    scanf("%d", &s);
    int m,h;
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    printf("\nThe given time in hours, minutes and seconds format is %d:%d:%d.", h,m,s);    
}
