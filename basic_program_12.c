#include <stdbool.h>
#include <stdio.h>
#include <math.h>


bool isPrime(int n)
{
  
    if (n == 1 || n == 0)
        return false;

    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main()
{
    int N = 50;

   
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
