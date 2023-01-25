#include <stdio.h>

int main() {

    // Initialise variables n,m
    int n, m;

    // Request and read input from user for the value of n
    printf("Enter the length of array X: ");
    scanf("%d", &n);

    // Request and read input from user for the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // While loop to assert that m is greater than n
    while (m <= n)
    {
        printf("Invalid Input, m must be greater then n \n");
        printf("Enter the value of m: ");
        scanf("%d", &m);
    }

    // Intialise set A
    int A[m];
    printf("Enter the elements of the set. \n");
    printf("Values of A should be nonnegative: \n");

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }

    // Initialise X to be an array of length n 
    int X[n];

    // Populate X array with values of –1
    for (int i = 0; i < n; i++)
    {
        X[i] = -1;
    }

    // Traversing through the array
    for (int i = 0; i <= m - 1; i++)
    {
        int a = A[i];

        // Getting the remainder from mod n || Performing modulus operation
        int r = a % n;

        // If X[r] = -1 then X[r] := a else return (X[r], a)
        if (X[r] == -1)
        {
            X[r] = a;
        }
        else
        {
            printf("%d %d", X[r], a);
            return 0; // Returns a zero exit status 
        }
    }

    return 0;
}
