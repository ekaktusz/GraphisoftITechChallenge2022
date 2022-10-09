#include <iostream>

const long long int MODULO = 1000000007L;

template <typename T>
T modpow(T base, T exp, T modulus)
{
    base%=modulus;
    T result = 1;
    while(exp > 0)
    {
        if(exp & 1) result = (result *base) % modulus;
        base = (base*base) % modulus;
        exp >>= 1;
    }
    return result;
}
 

long long int modInverse(long long int A)
{
    for (int X= 1; X < MODULO; X++)
    {
        if (((A%MODULO)*(X%MODULO)) %MODULO == 1)
            return X;
    }
    return 0;
}

long long int phi(long long int n)
{
	long long int result = n;
	for (long long int p = 2; p * p <= n; ++p)
	{
		if (n % p == 0)
		{
			while (n % p == 0)
				n /= p;

			result -= result / p;
		}
	}

	if (n > 1)
		result -= result / n;

	return result;
}

long long int calculate(long long int N)
{
    long long int sum = 0;
    long long int base = 2;
    for (long long int d = 1; d < sqrt(N + 1); ++d)
    {
        if (N % d == 0)
        {
            long long int power1 = modpow<long long int>(base, (N / d), MODULO);
            sum += (phi(d) % MODULO * power1) % MODULO;
            if (N/d != d)
            {   
                long long int power2 = modpow<long long int>(base, d, MODULO);
                sum += (phi(N / d) % MODULO * power2) % MODULO;
            }
        }
    }
    return (sum % MODULO) * (modInverse(N) % MODULO);
}
 
int main(int argc, char** argv) {
    unsigned long long int N;
    std::cin >> N;
    std::cout << calculate(N) % MODULO << std::endl;
    return 0;
}
