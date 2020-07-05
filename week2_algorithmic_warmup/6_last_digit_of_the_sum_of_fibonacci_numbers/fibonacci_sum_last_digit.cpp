//Series for n=3 will be 
//F0 + F1 + F2 + F3 = F2 + F2 + F3 = F1 + F2 + F2 + F3 - F1 = F1 + 2F2 + F3 - F1 = F3 + F2 + F3 - F1 = F4 + F3 - F1 = F5 - F1 hence n+2=5 for n=3.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , m , o = 0 , p = 1 , q = 1;
    cin>>n;
    m = (n+2)%60; //logic as stated above 
    //The idea is to notice that the last digits of fibonacci numbers also occur in sequences of length 60 (from the previous problem: since pisano period of 10 is 60).
    for(long long int i = 2 ; i <= m ; i++)
    {
        q = o + p;
        o = p;
        p = q;
    } // calc fibonacci of m as F (n+2)%10 will be same as Fm %10
if(m == 0) //if m=0 then q should be 0 and not 1 so base case
q = 0;
    int result = (q-1 + 10)%10;  //if q ends up 0 then result should be 9 and not -1
    cout<<result;
    return 0;
}
