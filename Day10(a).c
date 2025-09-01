/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c)
        printf("\nThis is an Equilateral Triangle");
    else if (a==b && a!=c ||
             b==c && b!=a ||
             a==c && c!=b)
        printf("\nThis is an Isosceles Triangle");
    else if(a!=b && b!=c)
        printf("\nThe triangle is a Scalene Triangle");
}