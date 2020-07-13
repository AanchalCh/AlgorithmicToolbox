#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp; int j=0; int count=0;
    unordered_map <int , int> m;
    for (int i=0;i<n;i++)
    {
        cin>>temp;
        j++;
        m[temp]++;
    }
    for(auto i:m)
    {
        if(i.second> j/2)
        {
            count =1;
            cout<<"1"<<endl;
            break;
        }
    }
    if(count==0)
    {
        cout<<"0"<<endl;
    }
}
