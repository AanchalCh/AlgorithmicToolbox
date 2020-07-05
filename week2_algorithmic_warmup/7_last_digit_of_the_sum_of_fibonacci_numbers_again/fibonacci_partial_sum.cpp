#include <bits/stdc++.h>
using namespace std;

int calc_fib(long long a,long long b) {
    long long c , d;
    c= (a+1)%60;
    d= (b+2)%60;
    long long o=0 , p=1 , q=1 , r=0, s=1, t=1;
    for(long long i=2 ; i<=c ; i++)
    {
        q = o + p;
        o = p;
        p = q;
    }
    for (long long i=2; i<=d; i++)
    {
        t =r+s;
        r=s;
        s=t;
    }
    if (c==0)
    q==0;
    if(d==0)
    t==0;

    int result = ((t%10) - (q%10) + 10) %10;
    return result;
}

int main() {
    long long a,b;
    cin>>a>>b;
    cout<<calc_fib(a,b);
    return 0;
}
