

#include <iostream>

using namespace std;

struct Pair
{
    int min =0;
    int max = 0;
};
Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    
    if (n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    
    if (arr[0]>arr[1])
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    
    for(int i=2;i<n;i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    
    return minmax;
}
int main() {
    int arr[] = {1,5,9,23,56,-2,-66,344};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    struct Pair minmax = getMinMax(arr, n);
    cout<<minmax.max;
    cout<<"\n";
    cout<<minmax.min;
}
