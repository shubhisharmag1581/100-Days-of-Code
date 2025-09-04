/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
void main()
{
    float cp, sp;
    printf("Enter cost price and selling price : ");
    scanf("%f%f",&cp,&sp);
    if(cp==sp)
        printf("\nThere is no profit and loss");
    else if(cp>sp)
    {
        float loss=cp-sp;
        float lp=loss/cp*100;
        printf("\nThe loss percent is : %f", lp);
    }
    else
    {
        float profit=sp-cp;
        float pp=profit*100/cp;
        printf("\nThe profit percent is : %f", pp);
    }
}