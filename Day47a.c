/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
bool isAnagram(char str1[], char str2[])
{
    int count1[26]={0};
    int count2[26]={0};
    int c=0;bool flag=true;
    while(str1[c]!='\0')
    {
        count1[str1[c]-'a']++;
        c++;
    }
    c=0;
    while(str2[c]!='\0')
    {
        count2[str2[c]-'a']++;
        c++;
    }
    c=0;
    while(c<26)
    {
        if(count1[c]!=count2[c])
            flag=false;
        c++;
    }
    return flag;
    
}
void main()
{
    char str1[50];
    char str2[50];
    printf("Enter first string : ");
    scanf("%s", str1);
    printf("Enter second string : ");
    scanf("%s", str2);
    bool flag=isAnagram(str1,str2);
    if(flag)
        printf("\nThe given strings are anagrams.");
    else
        printf("\nThe given strings are not anagrams.");
}