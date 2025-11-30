/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The 
program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include<stdio.h>
void main()
{
    FILE *fptr;
    char line[100];
    
    fptr = fopen("info.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    
    fclose(fptr);
}