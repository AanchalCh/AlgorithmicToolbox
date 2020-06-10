#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , m , o = 0 , p = 1 , q = 1;
    cin>>n;
    m = (n+2)%60;
    for(long long int i = 2 ; i <= m ; i++)
    {
        q = o + p;
        o = p;
        p = q;
    }
if(m == 0) //if m=0 then q should be 0 and not 1 so base case
q = 0;
    int result = (q-1 + 10)%10;  //if q ends up 0 then result should be 9 and not -1
    cout<<result;
    return 0;
}
