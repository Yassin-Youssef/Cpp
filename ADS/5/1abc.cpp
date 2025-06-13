#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>

using namespace std;
using namespace std::chrono;
/*part (a)*/
/*Naive Recursive Fibonacci*/
long long naiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return naiveFibonacci(n - 1) + naiveFibonacci(n - 2);
}
/*Bottom-Up Fibonacci (Dynamic Programming)*/
long long bottomUpFibonacci(int n) {
    long long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
/*Closed-Form Fibonacci (Binet's Formula)*/
long long closedFormFibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

/*Matrix Representation (Matrix Exponentiation)*/
struct Matrix {
    long long a, b, c, d;
};
/*Matrix multiplication function*/
Matrix multiply(Matrix m1, Matrix m2) {
    Matrix result;
    result.a = m1.a * m2.a + m1.b * m2.c;
    result.b = m1.a * m2.b + m1.b * m2.d;
    result.c = m1.c * m2.a + m1.d * m2.c;
    result.d = m1.c * m2.b + m1.d * m2.d;
    return result;
}
/*Matrix exponentiation function*/
Matrix power(Matrix m, int n) {
    if (n == 1)
        return m;
    if (n % 2 == 0) {
        Matrix half = power(m, n / 2);
        return multiply(half, half);
    } else {
        return multiply(m, power(m, n - 1));
    }
}
/*Matrix Fibonacci function*/
long long matrixFibonacci(int n) {
    if (n == 0)
        return 0;
    Matrix base = {1, 1, 1, 0};
    Matrix result = power(base, n - 1);
    return result.a;
}
/*Part (b) - Measuring Running Times*/
int main() {
    /*list of n values to test*/
    vector<int> ns = {0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 16, 20, 25, 32, 40, 50, 63};  
    long long threshold = 1000000000;  /*Arbitrary threshold for maximum time*/
    /*Sample times for each method*/
    for (int n : ns) {
        /*Measure time for Naive Recursive Fibonacci*/
        auto start = high_resolution_clock::now();
        long long result = naiveFibonacci(n);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        if (duration.count() > threshold) break;
        cout << "Naive Fibonacci for n=" << n << ": " << duration.count() << " microseconds\n";
        /*Measure time for Bottom-Up Fibonacci*/
        start = high_resolution_clock::now();
        result = bottomUpFibonacci(n);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        if (duration.count() > threshold) break;
        cout << "Bottom-up Fibonacci for n=" << n << ": " << duration.count() << " microseconds\n";
        /*Measure time for Closed-form Fibonacci*/
        start = high_resolution_clock::now();
        result = closedFormFibonacci(n);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        if (duration.count() > threshold) break;
        cout << "Closed-form Fibonacci for n=" << n << ": " << duration.count() << " microseconds\n";
        /*Measure time for Matrix Fibonacci*/
        start = high_resolution_clock::now();
        result = matrixFibonacci(n);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        if (duration.count() > threshold) break;
        cout << "Matrix Fibonacci for n=" << n << ": " << duration.count() << " microseconds\n";
    }
    return 0;
}
/*part (c):
Yes, all the methods should return the same Fibonacci number for the same value of n. 
The difference between the methods lies in their efficiency and precision, not the correctness of the results.*/
/*The naive recursive approach can suffer from exponential time complexity and recalculates values multiple times
leading to very slow performance for larger values of n.*/