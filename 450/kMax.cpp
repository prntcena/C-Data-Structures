#include <iostream>
#include <set> // need to have STL to use set
using namespace std;

int main() {

    int arr[] = {1,7,4,2,8,9,22,3,11};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 7;
    
    set<int> s(begin(arr),end(arr));
    set<int>::iterator itr = s.begin();
    advance(itr, k-1); // use n-k to get kth smallest element
    
    cout<<*itr<<'\n';
}
