#include <iostream>

// Static variable to count function calls
static int count = 0;

// Function to calculate Fibonacci using memoization
int fibonacci(int n, int memo[]) {
    count++; // Increment count to track function calls
    
    if (n <= 1) {
        return n; // Base case
    }
    
    if (memo[n] != -1) {
        return memo[n]; // Return the stored value if it exists
    }
    
    // Store the result in the memo array
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    const int MAX = 50; // Define a maximum value for n
    int n = 5; // Change n to calculate Fibonacci of another number
    int memo[MAX]; // Declare an array for memoization
    
    // Initialize all elements of the memo array to -1
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }

    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n, memo) << std::endl;
    std::cout << "Function calls: " << count << std::endl;

    return 0;
}
