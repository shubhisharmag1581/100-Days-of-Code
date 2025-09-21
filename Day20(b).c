/* Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char binary[50];
    int i,len;
    printf("Enter the binary number : ");
    scanf("%s",binary);
    len=strlen(binary);
    printf("\nThe 1's compliment of the given binary number is : ");
    for(i=0;i<len;i++)
    {
        if (binary[i]=='0')
            printf("1");
        else 
            printf("0");
    }
}