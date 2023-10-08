#include <stdio.h>

// Function to find the greatest common divisor of two numbers
   int gcd(int a, int b) {
        while (b != 0) {
           int temp = a;
           a = b;
           b = temp % b;
    }
          return a;
}

// Function to find the least common multiple of two numbers
    int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
}

 int main() {
    // Get two numbers from the user
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Find the GCD and LCM of the two numbers
    int gcdVal = gcd(n1, n2);
    int lcmVal = lcm(n1, n2);

    // Print the GCD and LCM
    printf("GCD of %d and %d is: %d\n", n1, n2, gcdVal);
    printf("LCM of %d and %d is: %d\n", n1, n2, lcmVal);

    return 0;
}