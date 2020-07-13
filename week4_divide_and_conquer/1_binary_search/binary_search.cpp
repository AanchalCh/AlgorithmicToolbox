#include <bits/stdc++.h>
using namespace std;

int binary_search(int *a, int n ,int k){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid= (low+high)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if (a[mid]>k)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
     return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n ; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int b[k];
    for (int j=0; j<k;j++)
    {
        cin>>b[j];
        cout<<binary_search(a , n , b[j])<<" ";
    }
}
