#include <iostream>
using namespace std;
int gcd_(int a, int b) {
  if(a==0)return b;
  if(a<b)swap(a,b);

  return gcd_(a%b,b);

}
/*
Product of 2 numbers is equal to
Product of their GCD and LCM
*/

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (1LL*a*b)/(gcd_(a,b)) << "\n";
  return 0;
}

