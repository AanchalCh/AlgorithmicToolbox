#include <iostream>
using namespace std;
/* long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}
*/

int get_pisano_period (int m){
    int a =0 , b=1 , c=a+b;
    for (int i =0; i< m*m; i++)
    {
        c = (a+b) % m;
        a = b;
        b = c;
        if(a == 0 && b == 1){
            return i+1;
        }
    }
}

long long get_fibonacci_huge_fast (long long n , int m)
{
    int remainder = n % get_pisano_period(m);

    long long first = 0 ;
    long long second = 1;

    int res = remainder;

    for (int i =1 ; i < remainder; i++){
        res = (first + second) % m;
        first = second;
        second = res;
    }
    return res % m;
}
int main() {
    long long n; int m;
    cin >> n >> m;
    cout << get_fibonacci_huge_fast(n, m) << '\n';
    return 0;
}
