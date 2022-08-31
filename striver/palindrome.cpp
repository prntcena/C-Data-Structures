#include <iostream>
#include <string>
using namespace std;

int reverse(int x)
{
    int rev = 0;
    while(x!=0)
    {
        int digit = x%10;
        rev = rev*10 + digit;
        x = x/10;
    }
    return rev;
}
int main()
{
    int x = 12321;
    int rev = reverse(x);
    if(x==rev)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }

    return 0;
}
