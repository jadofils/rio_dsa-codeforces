#include<iostream>
using namespace std;

static int count = 0;

int fib(int n) {
    count++;
    if (n < 0) {
        cout << "-ve";
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 5;
    int result = fib(n);
    cout << "count: " << count << "\n" << "sum: " << result << endl;
    return 0;
}
