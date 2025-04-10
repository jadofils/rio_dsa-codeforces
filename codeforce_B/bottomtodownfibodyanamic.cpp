#include <iostream>
// Function to calculate Fibonacci using iteration
int fibonacciBottomUp(int n) {
    int prev = 0, curr = 1;
    int countBottomUp = 0; // Counter for iteration steps
    
    if (n <= 1) {
        return n; // Base case
    }
    
    for (int i = 2; i <= n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
        countBottomUp++; // Count each iteration
    }
    std::cout << "Function calls (Bottom-Up): " << countBottomUp << std::endl;
    return curr;
}

int mainBottomUp() {
    int n = 5; // Change n to calculate Fibonacci of another number

    std::cout << "Bottom-Up Fibonacci(" << n << ") = " << fibonacciBottomUp(n) << std::endl;

    return 0;
}
