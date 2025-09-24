/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
void main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<5-i;j++)
        {
            printf("   ");
        }
        for(int k=i;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}