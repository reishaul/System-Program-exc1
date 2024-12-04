#include "advmath.h"
// Implement the functions below
float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;

}

double power(int base, int exponent)
{
    long result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

float square_root(int n)
{
    float x = n;
    float y = 1;
    float e = 0.000001;
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}