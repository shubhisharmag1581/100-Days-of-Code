/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
void main()
{
    int day;
    printf("Enter the day of the week based on a number : ");
    scanf("%d", &day);
    switch (day)
    {
        case 1 : 
                printf("The day is Monday.");
                break;
        case 2 :
                 printf("The day is Tuesday.");
                 break;
        case 3 : 
                printf("The day is Wednesday.");
                break;
        case 4 : 
                printf("The day is Thursday.");
                break;
        case 5 : 
                printf("The day is Friday.");
                break;
        case 6 : 
                printf("The day is Saturday.");
                break;
        case 7 : 
                printf("The day is Sunday.");
                break;
        default : 
                printf("Invalid Input. Number should from 1 to 7.");
    }
}