/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence
 of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include<stdio.h>
void main()
{
    FILE *fptr;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

    fptr = fopen("sample.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We are outside a word
        } else {
            if (inWord == 0) {
                wordCount++; // We found the start of a new word
                inWord = 1; // We are now inside a word
            }
        }
    }

    // If the file is not empty, count the last line if it doesn't end with a newline
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(fptr);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);
}