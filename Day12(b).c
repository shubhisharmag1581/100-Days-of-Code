/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
void main()
{
    int units;int rate;
    printf("Enter the number of units consumed : ");
    scanf("%d", &units);
    if(units<=100)
         rate=units*5;
    else if(units<=200)
        rate=units*7;
    else if(units<=300)
        rate=units*10;
    else 
        rate=units*12;
    
    printf("\n The electricity bill to be paid is : %d",rate);
}