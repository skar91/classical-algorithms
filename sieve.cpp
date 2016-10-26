#include<iostream>
#include<cstring>
using namespace std;

void sieve(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int x,i,j;
    for (x=2; x*x<=n; x++)
    {
        if (prime[x] == true)
        {
            for (i=x*2; i<=n; i += x)
                prime[i] = false;
        }
    }
    for (x=2; x<=n; x++)
       if (prime[x]) cout << x << " ";
}

int main()
{
    int n=100;
    cout<<"Displaying all prime numbers between 1 and 100\n";
    sieve(n);
    return 0;
}
