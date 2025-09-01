/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
void main()
{
    int per;
    printf("Enter percentage : ");
    scanf("%d", &per);
    char grade;
    if (per>90)
        grade = 'A';
    else if (per>80)
        grade='B';
    else if (per>70)
        grade='C';
    else if(per>60)
        grade='D';
    else if (per>50)
        grade='E';
    else 
        grade='F';
    printf("Grade : %c", grade);
    
}