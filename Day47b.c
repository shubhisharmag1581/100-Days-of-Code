/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[1024];
    char longest_str[1024];
    int len;
    int i,index=0;
    int max_wlen=0,wlen=0;
    printf("Enter a sentence : ");
    fgets(str,1024,stdin);
    len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            wlen++;
            continue;
        }
        if(wlen>max_wlen)
        {
            max_wlen=wlen;
            index=i-max_wlen;
        }
        wlen=0;
    }
    for(i=0;i<max_wlen;i++)
        longest_str[i]=str[index+i];
    longest_str[i]='\0';
    printf("\nLongest word : %s", longest_str);
    printf("\nLongest word length : %d",max_wlen);
}