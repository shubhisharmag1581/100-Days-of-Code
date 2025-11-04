/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[1024];
    char str2[1024];
    printf("Enter first string : ");
    fgets(str1,1024,stdin);
    int i=0,j,ctr=0,m=0;
    while(str1[i]!='\0')
    {
        if(str1[i]==' ' || str1[i]=='\0')
        {
            for(j=i-1;j>=ctr;j--)
            {
                str2[m]=str1[j];
                m++;
            }
            str2[m++]=' ';
            ctr=i+1;
        }
        i++;
    }
    printf("\nThe reverse of each word in the sentence is : %s",str2);
}