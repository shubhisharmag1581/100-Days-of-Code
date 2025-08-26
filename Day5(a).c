/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
void main()
{
    double p,r,t;
    printf("Enter principal amount : ");
    scanf("%lf", &p);
    printf("Enter rate of interest : ");
    scanf("%lf", &r);
    printf("Enter time : ");
    scanf("%lf", &t);
    double si=p*t*r/100;
    printf("\nSimple Interest : %f", si);
   double ci = p * (pow((1 + r / 100), t) - 1)
    printf("\nCompound Interest : %f", ci);
}