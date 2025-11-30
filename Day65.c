/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to 
determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include<stdio.h>
#include<string.h>
void main()
{
    int n1,n2;
    printf("Enter length of first string : ");
    scanf("%d",&n1);
    char str1[n1];
    printf("Enter first string : ");
    scanf("%s",str1);
    
    printf("Enter length of second string : ");
    scanf("%d",&n2);
    char str2[n2];
    printf("Enter second string : ");
    scanf("%s",str2);
    
    if(n1!=n2)
    {
        printf("\nNot Anagram");
        return;
    }
    
    int freq1[26]={0}, freq2[26]={0};
    
    for(int i=0;i<n1;i++)
    {
        freq1[str1[i]-'a']++;
        freq2[str2[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            printf("\nNot Anagram");
            return;
        }
    }
    
    printf("\nAnagram");
}