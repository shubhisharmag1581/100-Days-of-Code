/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char fileName[100];
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0;

    // Take the filename from user
    printf("Enter the filename: ");
    scanf("%s", fileName);

    // Try to open the file in read mode
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // Read the content of the file and count vowels and consonants
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for easier comparison
            char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}