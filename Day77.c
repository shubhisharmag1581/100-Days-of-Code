/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the 
result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char inputFileName[] = "input.txt";
    char outputFileName[] = "output.txt";
    FILE *inputFile, *outputFile;
    int ch;

    // Open input file in read mode
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input file, convert to uppercase, and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); // Convert to uppercase
        }
        fputc(ch, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and written to %s successfully.\n", outputFileName);
    return 0;
}