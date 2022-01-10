#include <iostream>

using namespace std;

void reverse(int arr[], int start, int end)
{
    if (start>=end)
    {
        return;
    }
    int temp = arr[start];
    arr[start]  = arr[end];
    arr[end] = temp;
    reverse(arr, start+1, end-1);
    
}
int main() {
    int arr[] = {1,2,3,4,5};
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0])) - 1;
    reverse(arr, start, end);
    
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);++i)
    {
        cout<<arr[i];
    }
    
}
