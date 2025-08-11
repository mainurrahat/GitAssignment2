#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int is_prime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int nth_prime(int n)
{
    int count = 0;
    int num = 2;
    while (1)
    {
        if (is_prime(num))
        {
            count++;
            if (count == n)
                return num;
        }
        num++;
    }
}

int main()
{
    printf("Hello, World!\n");
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    int fib_num = 10;
    printf("Fibonacci of %d is %d\n", fib_num, fibonacci(fib_num));
    return 0;
}
