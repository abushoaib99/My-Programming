#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int i=2; i*i<=n; i++)
    {
        if (prime[i] == true)
        {
            for (int j=i*i; j<=n; j += i)
                prime[j] = false;
        }
    }
    //Print all prime numbers
    for (int i=2; i<=n; i++)
        if (prime[i])
            printf("%d ",i);
}

int main()
{
    int n = 100;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
