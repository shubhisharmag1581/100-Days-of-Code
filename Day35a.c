//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("No second largest element found\n");
    } else {
        printf("Second largest element is %d\n", second_largest);
    }

    return 0;
}
