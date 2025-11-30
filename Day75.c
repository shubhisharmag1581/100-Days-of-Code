/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the 
end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>
void main() 
{
    char fileName[15];
    char newText[500];
    FILE *file;

    // Take the existing file name from user
    printf("Enter the existing file name: ");
    scanf("%s", fileName);

    // Open the file in append mode
    file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return ;
    }

    // Take new line of text from user
    printf("Enter the text to append: ");
    getchar(); // To consume the newline character left by previous scanf
    fgets(newText, sizeof(newText), stdin);

    // Append the new text to the file
    fputs(newText, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return ;
}