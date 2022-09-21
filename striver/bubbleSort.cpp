
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(int arr[], int n)
{
    if(n==1)
        return;
    
    int count =0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }
    }
    
    if (count==0)
        return;
        
    bubbleSort(arr, n-1);
}

int main()
{
    
    int arr[] = {14, 20, 78, 98 ,20 ,45};
    
    bubbleSort(arr, 6);
    
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
