/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
void main()
{
    int days;int fine;
    printf("Enter the number of days after which the book is being returned : ");
    scanf("%d", &days);
    if(days<=5)
         fine=days*2;
    else if(days<=10)
        fine=days*4;
    else if(days<=30)
        fine=days*6;
    else 
        fine=-1;
    
    if(fine==-1)
        printf("Membership Cancelled");
    else 
        printf("Fine : Rs %d", fine);
}