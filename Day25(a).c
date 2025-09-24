/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345
*/
#include<stdio.h>
void main()
{
  for(int i=1;i<=5;i++)
{
    int k=6-i;
    for(int j=i;j>0;j--)
{
printf("%d",k);
k++;
}
printf("\n");
}
}



