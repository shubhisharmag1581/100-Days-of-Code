/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    printf("Enter the name : ");
    fgets(name,50,stdin);
    char initial[10];
    initial[0]=name[0];
    initial[1]='.';
    int j=2;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            initial[j]=name[i+1];
            initial[++j]='.';
            j++;
        }
    }
    printf("\nThe initial of the given name is : %s",initial);
}