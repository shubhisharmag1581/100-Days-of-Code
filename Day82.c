/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' 
based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <stdlib.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};
int main() 
{
    enum TrafficLight light;
    char input[10];

    // Take traffic light color as input from user
    printf("Enter traffic light color (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    // Map input string to enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid traffic light color.\n");
        return 1;
    }

    // Print action based on traffic light color
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}