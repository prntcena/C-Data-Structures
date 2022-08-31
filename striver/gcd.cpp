#include <iostream>
#include <string>
using namespace std;

int GCD(int x, int y)
{
    int min_element = x<y?x:y;
    int gcd = 1;
    for(int i=1;i<=min_element;i++)
    {
        if(x%i==0 and y%i==0)
        {
            gcd = gcd>i?gcd:i;
        }
    }
    return gcd;
}

int main()
{
    int x= 3;
    int y=6;
    
    cout<<GCD(x,y)<<endl;
    return 0;
}
