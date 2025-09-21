/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
#include <String.h>
void main()
{
    int num;
    int bin[15];
    printf("Enter a number : ");
    scanf("%d",&num);
    int temp=num;
    int i=0;
    while(temp>0)
    {
        if(temp%2==0)
            bin[i]=0;
        else
            bin[i]=1;
        temp=temp/2;
        i++;
    }
printf("\nThe binary equivalent of the given number is : ");
for(int j = i-1; j >= 0; j--)
    printf("%d", bin[j]);
}