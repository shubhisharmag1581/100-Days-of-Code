/*Q104: Write a Program to take a positive integer n as 
input, and find the pivot integer x such that the sum of 
all elements between 1 and x inclusively equals the sum of 
all elements between x and n inclusively. Print the pivot 
integer x. If no such integer exists, print -1. Assume that
 it is guaranteed that there will be at most one pivot 
 integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int sum1=0,sum2=0,ctr=0,pivot=-1;
    for(int i=0;i<n;i++)
    {
        for(ctr=1;ctr<i;ctr++)
          sum1+=ctr;
        for(ctr=i+1;ctr<n;ctr++)
          sum2+=ctr;
        if(sum1==sum2)
        {
            pivot=i;
            break;
        }
    }
    printf("\nPivot Integer : %d",pivot);
}