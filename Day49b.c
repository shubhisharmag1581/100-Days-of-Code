/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    printf("Enter the name : ");
    fgets(name,50,stdin);
    char initial[25];
    int index;
    int i;
    for(i=49;i>0;i--)
    {
        if(name[i]==' ')
            index=i;
    }
    initial[0]=name[0];
    initial[1]='.';
    int j=2;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            initial[j]=name[i+1];
            initial[++j]='.';
            j++;
        }
        for(i=index;name[i]!='\0';i++)
        {
            name[i]=initial[j];
            j++;
        }
        initial[j]='\0';
        printf("\nThe initial of the given name is : %s", initial);
    }
}