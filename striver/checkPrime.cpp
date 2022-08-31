#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int x= 14;
    
    if(isPrime(x))
    {
        cout<<"is Prime"<<endl;
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}
