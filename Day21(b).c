/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int arr[25];
    int i=1,ctr=0;
    while(i<num)
    {
        if(num%i==0)
        {
            arr[ctr]=i;
            ctr++;
        }
        i++;
    }
    int sum=0;
    for(i=0;i<ctr;i++)
        sum+=arr[i];
    if(sum==num)
        printf("\nThis is a perfect number.");
    else
        printf("\nThis number is not a perfect number.");
}