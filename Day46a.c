/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
void main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, 50, stdin);
    char str2[50];
    int i=0;
    while(i<n)
    {
        if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || 
           str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U' || )
        str2[i]=str;
        i++;
    }
    printf("\nThe string after removing vowels is : %s", str2);
}