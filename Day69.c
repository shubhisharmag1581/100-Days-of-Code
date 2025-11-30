/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated 
element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include<stdio.h>
void main() 
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
        
    int freq[100]={0}; // Assuming the range of numbers is within 0-99
    for(int i=0;i<n;i++)
    {
        freq[nums[i]]++;
        if(freq[nums[i]]==2)
        {
            printf("\nRepeated element : %d",nums[i]);
            return;
        }
    }
}