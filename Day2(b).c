/*Q4: Write a program to calculate the area and circumference of a circle given its 
radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
void main()
{
    int r;
    printf("Enter radius : ");
    scanf("%d", &r);
    float a,c;
    a=3.14*r*r;
    printf("The area of the circle is : %f", a);
    c=2*3.14*r;
    printf("\nThe perimeter of the circle is : %f",c);
}