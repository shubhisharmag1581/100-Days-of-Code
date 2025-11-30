/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s 
name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that
 the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("info.txt","w");
    
    char name[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    
    fclose(fptr);
    
    printf("File created successfully! Data written to info.txt\n");
}