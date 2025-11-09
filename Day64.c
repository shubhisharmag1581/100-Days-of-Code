/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without
 repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("Enter length of string : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter string : ");
    scanf("%s",str);
    int len=0,max_len=0;
    for(int i=0;i<n-1;i++)
    {
        len=0;
        for(int j=i+1;j<n;j++)
        {
            int k=i;
            while(k<n)
            {
                if(str[k]!=str[j])
                {
                    len++;
                    k++;
                }
                else
                    break;
            }
            if(str[k]==str[j])
               break;
        }
        if(len>max_len)
            max_len=len;
    }
    printf("\nMax substring length : %d",max_len);
}