#include<iostream>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0 || n%13==0 ) return false;

    for (int i=17; i*i<=n; i++)
        if (n%i==0)
           return false;

    return true;
}



int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(isPrime(n)) cout<<n<<" is a prime number";
    else cout<<n<<" is not a prime number";
    return 0;
}
