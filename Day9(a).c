/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h> 
#include <math.h>
void main()
{
    double a,b,c;double x,x1,x2;
    printf("Enter coefficients of each variable : ");
    scanf("%lf%lf%lf", &a,&b,&c);
    printf("\nThe given equation is : (%d)x^2 + (%d)x + (%d) = 0", (int)a,(int)b,(int)c);
    double deter=pow(b,2)-4*a*c;
    int D=(int) deter;
    if(D>0)
    {
        x1=(-b+sqrt(deter))/(2*a);
        x2=(-b-sqrt(deter))/(2*a);
        printf("\nRoots are real and different: %.0f, %.0f", x1, x2);
    }
    else if(D==0)
    {
        x=(-b+sqrt(deter))/2*a;
        printf("Roots are real and same : %d", x);
    }
    else if(D<0)
        printf("\nRoots are complex");
    
}