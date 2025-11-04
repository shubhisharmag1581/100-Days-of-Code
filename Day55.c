/*Q105: Write a program to take an integer array nums of
size n, and print the majority element. The majority
element is the element that appears strictly more than 
⌊n / 2⌋ times. Print -1 if no such element exists. Note:
Majority Element is not necessarily the element that is
present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++)
    {
        printf("Enter %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        int ctr=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
               ctr++;
        }
        arr2[i]=ctr;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr2[i]>max)
           max=i;
    }
    if(max>(n/2))
       printf("\nThe majority element is : %d",arr[i]);
    else 
       printf("\nThere is no majority element.");
}