#include <iostream>
#include <limits>

// C is cool

// Function to fill the Fibonacci series in the array
void fillFib(int arr[], const int n) {
    int prev1 = 1;
    int prev2 = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            arr[i] = prev2;
        } else if (i == 1) {
            arr[i] = prev1;
        } else {
            const int num = prev1 + prev2;
            prev2 = prev1;
            prev1 = num;
            arr[i] = num;
        }
    }
}

int main() {
    int n;

    printf("Enter how many Fibonacci numbers you want: \n");

    // Check for valid input
    while(scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid integer greater than or equal to 1: \n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);  // Clear input buffer
    //  clear the input buffer by consuming and discarding characters until either a
    //newline character ('\n') or the end of the input (EOF) is encountered.
    }

    int* arr = new int[n]();  // Dynamic arra to store Fibonnaci number

    fillFib(arr, n);

    printf("Fibonacci series of %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    delete[] arr;

    return 0;
}