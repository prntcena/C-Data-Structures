#include <iostream>
#include <set>
#include <vector>

using namespace std;

    
int main() {
    int arr[] = {0,2,1,1,0,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    cout<< c0<<'\n'<<c1<<'\n'<<c2<<endl;
    for(int i=0;i<n;++i)
    {
        if(arr[i] == 0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    int i =0;
    while(c0>0)
    {
        arr[i++] = 0;
        c0--;
    }
    
    while(c1>0)
    {
        arr[i++] = 1;
        c1--;
    }
    while(c2>0)
    {
        arr[i++] = 2;
        c2--;
    }
    
    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }
}
