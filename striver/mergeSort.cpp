
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int l,int m, int r)
{
    int i=0,j=0,k=0,nl=0, nr=0;
    nl = m-l+1;
    nr = r-m;
    
    int larr[nl]; int rarr[nr];
    for(int i=0;i<nl;i++)
    {
        larr[i] = arr[i+l];
    }
    for(int j=0;j<nr;j++)
    {
        rarr[j] = arr[m+j+1];
    }
    //reinitialize i,j,k , k points to first element => left
    i=0,j=0,k = l;
    
    // merge temp arrays to real array
    while(i<nl and j<nr)
    {
        if(larr[i]<rarr[j])
        {
            arr[k] = larr[i];
            i++;
        }
        else
        {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
        // for the remaining elements in larr-> insert into arr
    while(i<nl)
    {
        arr[k] = larr[i];
        i++,k++;
    }
    // for the remaining elements in rarr-> insert into arr
    while(j<nr)
    {
        arr[k] = rarr[j];
        j++, k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr, l,m,r);
    }
}

int main()
{
    
    int arr[] = {14, 20, 78, 98 ,20 ,45};
    
    mergeSort(arr, 0, 5);
    
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
