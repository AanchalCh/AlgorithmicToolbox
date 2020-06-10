#include <iostream>

int get_change(int m) {
  //write your code here
  int a = 10; int b = 5; int c = 1; int coinA , coinB , coinC = 0; int n;
  coinA = m / a;
  if(coinA != 0)
    m -= (a*coinA);
  coinB = m / b;
  if (coinB != 0)
    m -= (b*coinB);
  coinC = m / c;
  n = coinA+coinB+coinC;
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
