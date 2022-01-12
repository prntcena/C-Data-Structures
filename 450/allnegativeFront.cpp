#include <iostream>

using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a[] = {1,-2,3,-4,-5,7,8,-6,10,-22};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    
    int j =0;
    for(int i=0;i<n;i++)
    {
        if (a[i]<0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
            }
            j++;
        }
    }
    cout<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
