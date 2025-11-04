/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str1[100],str2[100], *temp;
    printf("Enter first string : ");
    scanf("%s",str1);
    printf("Enter second string : ");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
        printf("\nNot Rotation");
    temp=(char *)malloc(strlen(str1)*2+1);
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str1)!=NULL)
        printf("\nRotation");
    else
        printf("\nNot Rotation");
}