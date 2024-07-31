#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (n > 0) {
        average = (float)sum / n;
    } else {
        printf("Cannot calculate average. Number of integers should be greater than 0.\n");
        return 1;
    }

    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
