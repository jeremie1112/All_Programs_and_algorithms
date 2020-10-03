#include <bits/stdc++.h>
using namespace std;
int gcd_(int a, int b) {
	if(a<b)swap(a,b);
  if(a==0)return b;
  if(b==0)return a;

  return gcd_(a%b,b);

}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_(a, b) << std::endl;
  return 0;
}
